
#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include "Transport.h"

class Car : public Transport
{
private:
    int wheels;

public:
    Car(std::string n, int speed, int w);

    void move() override;
};

#endif
