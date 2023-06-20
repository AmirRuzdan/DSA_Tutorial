#include <iostream>
#include <cmath>

using namespace std;

// Function for which we want to find the root
double function(double x)
{
    // Example function: f(x) = x^3 - 2x - 5
    return pow(x, 3) - 2 * x - 5;
}

// Modified Newton-Raphson method (Secant method)
double modifiedNewtonRaphson(double x0, double x1, double epsilon, int maxIterations)
{
    double x = x1;
    double prevX = x0;
    int iteration = 0;

    while (abs(function(x)) > epsilon && iteration < maxIterations)
    {
        double denominator = function(x) - function(prevX);
        if (denominator == 0)
        {
            cout << "Denominator is zero. Method failed." << endl;
            return 0.0;
        }

        double deltaX = -function(x) * (x - prevX) / denominator;
        prevX = x;
        x = x + deltaX;
        iteration++;
    }

    return x;
}

int main()
{
    // Initial guesses and maximum number of iterations
    double x0 = 1.0;
    double x1 = 2.0;
    double epsilon = 0.0001;
    int maxIterations = 100;

    // Find the root using the Modified Newton-Raphson method
    double root = modifiedNewtonRaphson(x0, x1, epsilon, maxIterations);

    cout << "Root: " << root << endl;

    return 0;
}
