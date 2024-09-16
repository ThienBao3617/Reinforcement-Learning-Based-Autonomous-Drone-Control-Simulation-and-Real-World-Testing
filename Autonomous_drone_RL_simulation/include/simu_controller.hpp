#ifndef SIMU_CONTROLLER_HPP
#define SIMU_CONTROLLER_HPP

#include "drone.hpp"
#include "enviro.hpp"

class SimulationController {
public:
    SimulationController();
    void runSimulationStep(Drone& drone);
private:
    Environment environment;
};

#endif // SIMULATION_CONTROLLER_H
