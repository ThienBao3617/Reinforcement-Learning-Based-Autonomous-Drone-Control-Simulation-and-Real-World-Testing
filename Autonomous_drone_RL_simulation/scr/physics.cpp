#include "physics.hpp"
#include <iostream>

Physics::Physics() {
    // Constructor, potentially set gravity or other parameters here
}

void Physics::updateDronePosition(float position[3], float velocity[3], float acceleration[3]) {
    // Update drone position based on velocity and acceleration (very basic model for now)
    for (int i = 0; i < 3; i++) {
        velocity[i] += acceleration[i];  // Update velocity
        position[i] += velocity[i];      // Update position
    }
    
    std::cout << "Updated position: ("
              << position[0] << ", " << position[1] << ", " << position[2] << ")" << std::endl;
}
