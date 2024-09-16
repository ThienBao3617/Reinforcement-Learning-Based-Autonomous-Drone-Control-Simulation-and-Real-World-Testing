#include <iostream>
#include "drone.hpp"
#include "simu_controller.hpp"
#include "enviro.hpp"

int main() {
    // Initialize the simulation components
    Drone drone;
    SimulationController simController;
    Environment environment;

    // Set the goal position for the drone from the environment
    drone.setTarget(environment.getGoalPosition());

    // Example: Run the simulation for 50 iterations or until the goal is reached
    for (int i = 0; i < 50; i++) {
        std::cout << "Simulation step " << i + 1 << std::endl;
        simController.runSimulationStep(drone);

        // Check if the drone has reached the goal
        if (environment.isDroneAtGoal(drone.getPosition())) {
            std::cout << "Drone has reached the goal!" << std::endl;
            //break;
        }
    }

    std::cout << "Simulation finished!" << std::endl;
    return 0;
}
