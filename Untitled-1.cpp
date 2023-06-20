#include <iostream>
#include <cmath>

#define MAX_ITERATIONS 100
#define EPSILON 0.0001

using namespace std;

struct Pipe {
    double length;
    double diameter;
    double roughness;
    double flow;
    double frictionFactor;
    double deltaH;
};

void calculateFrictionFactor(Pipe& pipe) {
    // Calculate friction factor using the Colebrook equation
    double Re = (4 * pipe.flow) / (M_PI * pipe.diameter);    //(Re = 4*Q/pi*D*nu )
    double A = log10(pipe.roughness / (3.7 * pipe.diameter) + 2.51 / pow(Re, 0.9));
    double B = pow(-2.0 * log10(pipe.roughness / (3.7 * pipe.diameter) + 2.51 / pow(Re, 0.9)), -2.0);
    pipe.frictionFactor = 1 / (A * A);
}

void hardyCrossMethod(Pipe* pipes, int numPipes) {
    int iterations = 0;

    while (iterations < MAX_ITERATIONS) {
        double totalFlowChange = 0.0;

        // Calculate flow change for each pipe
        for (int i = 0; i < numPipes; i++) {
            Pipe& pipe = pipes[i];

            // Calculate the friction factor
            calculateFrictionFactor(pipe);

            // Calculate the head loss
            double headLoss = pipe.frictionFactor * (pipe.length / pipe.diameter) * (pipe.flow * abs(pipe.flow));

            // Calculate the flow change usig newton rhapson formula
            double previousFlow = pipe.flow;
            pipe.flow = previousFlow - pipe.deltaH / ((pipe.length / pipe.diameter) * pipe.frictionFactor);
            double flowChange = abs(pipe.flow - previousFlow);

            // Update the flow and total flow change
            totalFlowChange += flowChange;
        }

        // Check for convergence
        if (totalFlowChange < EPSILON) {
            cout << "Converged after " << iterations << " iterations." << endl;
            break;
        }

        iterations++;
    }

    // Output the final flows
    for (int i = 0; i < numPipes; i++) {
        cout << "Flow in pipe " << i + 1 << ": " << pipes[i].flow << endl;
    }
}

int main() {
    int numPipes;
    cout << "Enter the number of pipes: ";
    cin >> numPipes;

    Pipe* pipes = new Pipe[numPipes];

    for (int i = 0; i < numPipes; i++) {
        cout << "Pipe " << i + 1 << endl;
        cout << "Enter the length (in meters): ";
        cin >> pipes[i].length;
        cout << "Enter the diameter (in meters): ";
        cin >> pipes[i].diameter;
        cout << "Enter the roughness (in meters): ";
        cin >> pipes[i].roughness;
        cout << "Enter the initial flow (in cubic meters per second): ";
        cin >> pipes[i].flow;
        pipes[i].deltaH = 0.0;  // Initialize deltaH to zero
        cout << endl;
    }

    hardyCrossMethod(pipes, numPipes);

    delete[] pipes;

    return 0;
}
