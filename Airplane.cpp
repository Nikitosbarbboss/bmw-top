
#include "Airplane.h"
#include <iostream>
#include <string>

Airplane::Airplane(std::string n, int speed, int height)
    : Transport(n, speed)
{
    maxHeight = height;
}

void Airplane::move()
{
    std::cout << "Airplane:" << std::endl;
    showInfo();
    std::cout << "Max height: " << maxHeight << " m" << std::endl;
    std::cout << "Airplane flies in the sky" << std::endl;
}
