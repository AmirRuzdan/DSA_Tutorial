#include <iostream>
#include <cmath>

using namespace std;

class Function {
public:
    virtual double evaluate(double x) const = 0;
    virtual double evaluateDerivative(double x) const = 0;
};

class PolynomialFunction : public Function {
private:
    double* coefficients;
    int degree;

public:
    PolynomialFunction(double* coeffs, int deg) : coefficients(coeffs), degree(deg) {}

    double evaluate(double x) const {
        double result = 0.0;
        double xPow = 1.0;

        for (int i = 0; i <= degree; i++) {
            result += coefficients[i] * xPow;
            xPow *= x;
        }

        return result;
    }

    double evaluateDerivative(double x) const {
        double result = 0.0;
        double xPow = 1.0;

        for (int i = 1; i <= degree; i++) {
            result += coefficients[i] * i * xPow;
            xPow *= x;
        }

        return result;
    }
};

class NewtonRaphson {
private:
    static const double EPSILON;
    static const int MAX_ITERATIONS;

public:
    static double findRoot(const Function& function, double initialGuess) {
        double x = initialGuess;
        int iterations = 0;

        while (iterations < MAX_ITERATIONS) {
            double fx = function.evaluate(x);
            double fpx = function.evaluateDerivative(x);

            if (abs(fpx) < EPSILON) {
                cerr << "Error: Derivative too small. Cannot continue Newton-Raphson method." << endl;
                return NAN;
            }

            double deltaX = fx / fpx;
            x -= deltaX;

            if (abs(deltaX) < EPSILON) {
                cout << "Converged in " << iterations << " iterations." << endl;
                return x;
            }

            iterations++;
        }

        cerr << "Error: Maximum iterations exceeded. Failed to converge." << endl;
        return NAN;
    }
};

const double NewtonRaphson::EPSILON = 1e-6;
const int NewtonRaphson::MAX_ITERATIONS = 100;

int main() {
    // Define the coefficients of the polynomial function
    double coefficients[] = { -2.0, 0.0, 1.0 };

    // Create the polynomial function object
    PolynomialFunction polynomial(coefficients, 2);

    // Find the root using the Newton-Raphson method
    double initialGuess = 2.0;
    double root = NewtonRaphson::findRoot(polynomial, initialGuess);

    if (!isnan(root)) {
        cout << "Root: " << root << endl;
        cout << "Function value at the root: " << polynomial.evaluate(root) << endl;
    }

    return 0;
}
