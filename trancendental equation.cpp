#include <iostream>
#include <cmath>

double equation(double x) {
    // Define your transcendental equation here
    return sin(x) - x * x;
}

double solveTranscendental(double a, double b, double tolerance) {
    double c = a;
  
    while ((b - a) >= tolerance) {
        // Find the midpoint
        c = (a + b) / 2;

        // Check if the root is found
        if (equation(c) == 0.0)
            break;

        // Update the interval boundaries
        if (equation(c) * equation(a) < 0)
            b = c;
        else
            a = c;
    }

    return c;
}

int main() {
    double a = 0.0;          // Left boundary of the interval
    double b = 2.0;          // Right boundary of the interval
    double tolerance = 0.0001; // Tolerance for the solution

    double root = solveTranscendental(a, b, tolerance);

    std::cout << "The root of the transcendental equation is: " << root << std::endl;

    return 0;
}

