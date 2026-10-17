
#include <iostream>
#include <string>

#include "Transport.h"
#include "Car.h"
#include "Airplane.h"
#include "Ship.h"

int main()
{
    Car car("BMW", 250, 4);
    Airplane airplane("Boeing 737", 850, 12000);
    Ship ship("Titanic", 40, 2200);

    Transport* transport;

    transport = &car;
    transport->move();

    std::cout << "\n--------------------\n" << std::endl;

    transport = &airplane;
    transport->move();

    std::cout << "\n--------------------\n" << std::endl;

    transport = &ship;
    transport->move();

    return 0;
}
