#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double TOLERANCE = 1e-6; // Tolerance for convergence

struct Pipe {
    int startNode;
    int endNode;
    double length;
    double diameter;
    double flowRate;
    double frictionFactor;
    double deltaH;
};

void calculateFlowRates(vector<Pipe>& pipes) {
    bool converged = false;

    while (!converged) {
        converged = true;

        // Resetting the deltaH for each iteration
        for (auto& pipe : pipes) {
            pipe.deltaH = 0.0;
        }

        for (auto& pipe : pipes) { // Removed the 'const' qualifier here
            double flowRateDiff = 0.0;
            double resistance = (8.0 * pipe.frictionFactor * pipe.length) / (pow(pipe.diameter, 5.0) * pow(M_PI, 2.0));

            for (const auto& otherPipe : pipes) {
                if (pipe.startNode == otherPipe.startNode || pipe.startNode == otherPipe.endNode) {
                    flowRateDiff += otherPipe.flowRate;
                }
                if (pipe.endNode == otherPipe.startNode || pipe.endNode == otherPipe.endNode) {
                    flowRateDiff -= otherPipe.flowRate;
                }
            }

            pipe.deltaH = resistance * pipe.flowRate * abs(pipe.flowRate) - flowRateDiff;
        }

        // Update flow rates and check convergence
        for (auto& pipe : pipes) {
            double oldFlowRate = pipe.flowRate;
            pipe.flowRate -= pipe.deltaH / ((8.0 * pipe.frictionFactor * pipe.length) / (pow(pipe.diameter, 5.0) * pow(M_PI, 2.0)));

            if (abs(pipe.flowRate - oldFlowRate) > TOLERANCE) {
                converged = false;
            }
        }
    }
}

int main() {
    // Example pipe network with 4 pipes
    vector<Pipe> pipes = {
        {1, 2, 5.0, 0.2, 0.0, 0.02, 0.0},
        {1, 3, 3.0, 0.1, 0.0, 0.02, 0.0},
        {2, 3, 4.0, 0.15, 0.0, 0.02, 0.0},
        {2, 4, 6.0, 0.25, 0.0, 0.02, 0.0}
    };

    calculateFlowRates(pipes);

    // Print the calculated flow rates
    for (const auto& pipe : pipes) {
        cout << "Flow rate in pipe " << pipe.startNode << " to " << pipe.endNode << ": " << pipe.flowRate << endl;
    }

    return 0;
}
