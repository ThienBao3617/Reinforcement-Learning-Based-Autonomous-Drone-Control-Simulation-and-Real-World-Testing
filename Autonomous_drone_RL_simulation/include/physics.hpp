#ifndef PHYSICS_HPP
#define PHYSICS_HPP

class Physics {
public:
    Physics();
    void updateDronePosition(float position[3], float velocity[3], float acceleration[3]);
};

#endif // PHYSICS_HPP
