// include/drone.hpp
#ifndef DRONE_HPP
#define DRONE_HPP

class Drone {
public:
    Drone();
    void updatePhysics(float dt);  // Keep this public to call from SimulationController
    const float* getPosition() const;
    void setTarget(const float target[3]);  // Set a new target position

private:
    float position[3];  // x, y, z coordinates
    float velocity[3];  // velocity in x, y, z
    float acceleration[3];  // acceleration in x, y, z
    float targetPosition[3];  // target goal position
};

#endif // DRONE_HPP
