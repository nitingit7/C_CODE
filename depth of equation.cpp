#include <iostream>
#include <cmath>

double calculateDepth(double fluidDensity, double sphereDensity, double sphereRadius) {
    double g = 9.8;  // acceleration due to gravity

    double depth = (sphereDensity - fluidDensity) * g * pow(sphereRadius, 2) / (2 * fluidDensity * g);

    return depth;
}

int main() {
    double fluidDensity = 1000;   // density of the fluid (in kg/m^3)
    double sphereDensity = 2000;  // density of the sphere (in kg/m^3)
    double sphereRadius = 0.5;    // radius of the sphere (in meters)

    double depth = calculateDepth(fluidDensity, sphereDensity, sphereRadius);

    std::cout << "The depth of the sphere in the fluid is: " << depth << " meters." << std::endl;

    return 0;
}

