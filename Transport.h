
#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
#include <string>

class Transport
{
protected:
    std::string name;
    int maxSpeed;

public:
    Transport(std::string n, int speed);

    void showInfo();
    virtual void move();

    virtual ~Transport();
};

#endif
