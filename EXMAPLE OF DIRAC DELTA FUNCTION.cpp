#include <iostream>
#include <cmath>

// Function to represent the Dirac Delta function at a specific point x
double diracDelta(double x, int n) {
    double delta = 1.0 / n;
    if (std::abs(x) <= delta / 2.0) {
        return n;
    } else {
        return 0.0;
    }
}

// Function to verify the properties of the Dirac Delta function
void verifyDiracDeltaProperties(double x) {
    int numTerms = 1000; // Number of terms in the sequence

    // Verify the properties
    double sum = 0.0;
    for (int i = 0; i < numTerms; ++i) {
        double fn = diracDelta(x, i);
        sum += fn;

        // Verify the scaling property
        double scalingProperty = diracDelta(x / 2.0, i) / 2.0;
        if (std::abs(fn - scalingProperty) > 1e-6) {
            std::cout << "Scaling property does not hold!" << std::endl;
        }
    }

    // Verify the identity property
    double identityProperty = diracDelta(0.0, numTerms);
    if (std::abs(sum - identityProperty) > 1e-6) {
        std::cout << "Identity property does not hold!" << std::endl;
    }

    // Verify the zero elsewhere property
    for (int i = 1; i < numTerms; ++i) {
        double fn = diracDelta(x, i);
        if (std::abs(fn) > 1e-6) {
            std::cout << "Zero elsewhere property does not hold!" << std::endl;
        }
    }
}

int main() {
    double x = 0.6; // Point at which to evaluate the Dirac Delta function

    // Verify the properties of the Dirac Delta function
    verifyDiracDeltaProperties(x);

    return 0;
}

