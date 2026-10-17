
#include "Ship.h"
#include <iostream>
#include <string>

Ship::Ship(std::string n, int speed, int c)
    : Transport(n, speed)
{
    capacity = c;
}

void Ship::move()
{
    std::cout << "Ship:" << std::endl;
    showInfo();
    std::cout << "Capacity: " << capacity << std::endl;
    std::cout << "Ship moves on water" << std::endl;
}
