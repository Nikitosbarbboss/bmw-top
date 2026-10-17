
#include "Transport.h"
#include <iostream>
#include <string>

Transport::Transport(std::string n, int speed)
{
    name = n;
    maxSpeed = speed;
}

void Transport::showInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Max speed: " << maxSpeed << " km/h" << std::endl;
}

void Transport::move()
{
    std::cout << "Transport is moving" << std::endl;
}

Transport::~Transport()
{
}
