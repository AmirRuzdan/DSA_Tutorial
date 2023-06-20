#include <iostream>
#include <vector>

using namespace std;

class Pipe {
private:
    double length;
    double diameter;
    double flow;
    double headLoss;

public:
    Pipe(double len, double dia) : length(len), diameter(dia), flow(0.0), headLoss(0.0) {}

    void setFlow(double f) {
        flow = f;
    }

    double getFlow() const {
        return flow;
    }

    double getHeadLoss() const {
        return headLoss;
    }
    float f =0.0;
    void calculateHeadLoss() {
        headLoss = (f * length * flow * flow) / (2 * diameter * 9.8)
;
    }
};

class Network {
private:
    vector<Pipe> pipes;
    double convergenceCriteria;

public:
    Network() : convergenceCriteria(0.001) {}

    void addPipe(double length, double diameter) {
        Pipe pipe(length, diameter);
        pipes.push_back(pipe);
    }

    void solve() {
        // Initialize the flows
        for (int i = 0; i < pipes.size(); i++) {
            pipes[i].setFlow(0.1); // Initial guess
        }

        bool converged = false;
        int iteration = 0;

        while (!converged) {
            iteration++;
            converged = true;

            // Calculate head losses
            for (int i = 0; i < pipes.size(); i++) {
                pipes[i].calculateHeadLoss();
            }

            // Adjust flows
            for (int i = 0; i < pipes.size(); i++) {
                double flowCorrection = 0.0;

                for (int j = 0; j < pipes.size(); j++) {
                    if (i != j) {
                        flowCorrection += pipes[j].getHeadLoss() * pipes[j].getFlow() / pipes[i].getHeadLoss();
                    }
                }

                double newFlow = flowCorrection / ((pipes[i].getHeadLoss() / pipes[i].getFlow()) - 1.0);
                double deltaFlow = newFlow - pipes[i].getFlow();

                if (deltaFlow > convergenceCriteria) {
                    converged = false;
                }

                pipes[i].setFlow(pipes[i].getFlow() + deltaFlow);
            }

            if (converged) {
                cout << "Converged in " << iteration << " iterations." << endl;
            }
        }
    }

    void printResults() {
        for (int i = 0; i < pipes.size(); i++) {
            cout << "Pipe " << i + 1 << " Flow: " << pipes[i].getFlow() << endl;
        }
    }
};

int main() {
    Network network;

    // Add pipes to the network
    network.addPipe(100.0, 0.5);
    network.addPipe(200.0, 0.4);
    network.addPipe(150.0, 0.6);

    // Solve the network
    network.solve();

    // Print the results
    network.printResults();

    return 0;
}
