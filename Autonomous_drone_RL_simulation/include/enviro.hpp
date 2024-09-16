// include/enviro.hpp
#ifndef ENVIRO_HPP
#define ENVIRO_HPP

class Environment {
public:
    Environment();
    bool isDroneAtGoal(const float position[3]);
    const float* getGoalPosition() const;  // Provide goal position to the drone

private:
    float goalPosition[3];  // x, y, z coordinates of the goal
};

#endif // ENVIRO_HPP
