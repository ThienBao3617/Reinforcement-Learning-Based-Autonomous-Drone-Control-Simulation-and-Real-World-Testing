#include "simu_controller.hpp"
#include "drone.hpp"
#include <iostream>

SimulationController::SimulationController() {
    // Initialize the environment (if needed)
}

void SimulationController::runSimulationStep(Drone& drone) {
    float dt = 0.1f;  // Time step in seconds
    std::cout << "Running simulation step..." << std::endl;
    
    // Update drone physics for this time step
    drone.updatePhysics(dt);

    // Print the updated drone position
    const float* pos = drone.getPosition();
    std::cout << "Updated position: (" 
              << pos[0] << ", " << pos[1] << ", " << pos[2] << ")" << std::endl;
}
