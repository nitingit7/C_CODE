#include <iostream>
#include <cmath>

double function(double x) {
    return pow(31079.21, 1 / x) - 0.000071799 * ((pow(26, pow(x, 3)) + 33 * pow(x, 2) + 9 * x) / (6 * pow(x, 3) + 11 * pow(x, 2) + 6 * x + 1));
}

double derivative(double x) {
    double dx = 1e-6;
    return (function(x + dx) - function(x)) / dx;
}

double newtonRaphson(double x0, double epsilon, int maxIterations) {
    double x = x0;
    int iterations = 0;

    while (std::abs(function(x)) > epsilon && iterations < maxIterations) {
        x = x - (function(x) / derivative(x));
        iterations++;
    }

    return x;
}

int main() {
    double initialGuess = 1.0;    // Initial guess for the root
    double epsilon = 1e-6;        // Desired precision
    int maxIterations = 100;      // Maximum number of iterations

    double root = newtonRaphson(initialGuess, epsilon, maxIterations);

    std::cout << "Root: " << root << std::endl;

    return 0;
}

