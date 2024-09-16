#include "drone.hpp"
#include <iostream>
#include <cmath>

Drone::Drone() {
    // Initialize position, velocity, acceleration, and targetPosition to zero.
    position[0] = position[1] = position[2] = 0.0f;
    velocity[0] = velocity[1] = velocity[2] = 0.0f;
    acceleration[0] = acceleration[1] = acceleration[2] = 0.0f;
    targetPosition[0] = targetPosition[1] = targetPosition[2] = 0.0f;
}

void Drone::setTarget(const float target[3]) {
    // Set the target position
    targetPosition[0] = target[0];
    targetPosition[1] = target[1];
    targetPosition[2] = target[2];
}

void Drone::updatePhysics(float dt) {
    // Proportional control gain for position correction
    float kp = 0.5f;
    // Damping factor to avoid excessive velocity accumulation
    float damping = 0.98f;

    // Compute acceleration based on the difference between the current position and the target
    for (int i = 0; i < 3; i++) {
        acceleration[i] = kp * (targetPosition[i] - position[i]);
        velocity[i] += acceleration[i] * dt;  // Update velocity with acceleration
        velocity[i] *= damping;                // Apply damping to velocity
        position[i] += velocity[i] * dt;       // Update position with velocity
    }
}

const float* Drone::getPosition() const {
    return position;
}
