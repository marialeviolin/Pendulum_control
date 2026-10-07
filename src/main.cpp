#include <iostream>

#include "State.hpp"
#include "PendulumModel.hpp"

int main()
{
    State state;

    state.x = 0.0;
    state.x_dot = 0.0;
    state.theta = 0.1;
    state.theta_dot = 0.0;

    PendulumModel model;

    double force = 0.0;

    State derivatives = model.derivatives(state, force);

        std::cout << "x_ddot     = " << derivatives.x_dot << std::endl;
        std::cout << "theta_ddot = " << derivatives.theta_dot << std::endl;
    
    return 0;
}