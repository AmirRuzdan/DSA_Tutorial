#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double TOLERANCE = 1e-6; // Tolerance for convergence

struct Member {
    int startNode;
    int endNode;
    double length;
    double coefficient;
    double displacement;
};

void calculateDisplacements(vector<Member>& members) {
    // Same implementation as before...
}

int main() {
    // Example frame with 4 members
    vector<Member> members = {
        {1, 2, 5.0, 1.0, 0.0},
        {1, 3, 3.0, 1.0, 0.0},
        {2, 3, 4.0, 1.0, 0.0},
        {2, 4, 6.0, 1.0, 0.0}
    };

    calculateDisplacements(members);

    // Create SFML window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pipe Flow Visualization");

    // Main loop
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the window
        window.clear(sf::Color::White);

        // Draw pipe connections
        for (const auto& member : members) {
            sf::Vertex line[] = {
                sf::Vertex(sf::Vector2f(member.startNode * 100.0, 400.0)),
                sf::Vertex(sf::Vector2f(member.endNode * 100.0, 400.0))
            };
            window.draw(line, 2, sf::Lines);
        }

        // Draw flow arrows
        for (const auto& member : members) {
            double flow = member.coefficient * member.displacement;
            sf::ConvexShape arrow(3);
            arrow.setPoint(0, sf::Vector2f(member.endNode * 100.0 - 10.0, 400.0 - 10.0));
            arrow.setPoint(1, sf::Vector2f(member.endNode * 100.0 + 10.0, 400.0 - 10.0));
            arrow.setPoint(2, sf::Vector2f(member.endNode * 100.0, 400.0 - 30.0 * flow));
            arrow.setFillColor(sf::Color::Red);
            window.draw(arrow);
        }

        // Display the window
        window.display();
    }

    return 0;
}
