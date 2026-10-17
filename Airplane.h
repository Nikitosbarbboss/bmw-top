
#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <iostream>
#include <string>
#include "Transport.h"

class Airplane : public Transport
{
private:
    int maxHeight;

public:
    Airplane(std::string n, int speed, int height);

    void move() override;
};

#endif
