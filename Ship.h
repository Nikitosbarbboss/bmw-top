
#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include "Transport.h"

class Ship : public Transport
{
private:
    int capacity;

public:
    Ship(std::string n, int speed, int c);

    void move() override;
};

#endif
