
#include "Car.h"
#include <iostream>
#include <string>

Car::Car(std::string n, int speed, int w)
    : Transport(n, speed)
{
    wheels = w;
}

void Car::move()
{
    std::cout << "Car:" << std::endl;
    showInfo();
    std::cout << "Wheels: " << wheels << std::endl;
    std::cout << "Car moves on the road" << std::endl;
}
