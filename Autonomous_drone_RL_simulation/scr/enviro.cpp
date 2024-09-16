#include "enviro.hpp"
#include <cmath>

Environment::Environment() {
    // Set a goal position (you can make this random or configurable later)
    goalPosition[0] = 5.0f;
    goalPosition[1] = 5.0f;
    goalPosition[2] = 0.0f; // Assume the goal is at the ground level
}

bool Environment::isDroneAtGoal(const float position[3]) {
    // Check if the drone's position is close enough to the goal
    float distance = static_cast<float>(std::sqrt(
        std::pow(position[0] - goalPosition[0], 2) +
        std::pow(position[1] - goalPosition[1], 2) +
        std::pow(position[2] - goalPosition[2], 2)
    ));
    
    return distance < 0.1f; // Assume goal is reached within 0.1 units
}

const float* Environment::getGoalPosition() const {
    return goalPosition;
}
