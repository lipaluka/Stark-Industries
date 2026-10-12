#include "Subsystem.h"
#include <iostream>

Subsystem::Subsystem(const std::string& name)
    : name(name), active(true)
{
}

void Subsystem::activate()
{
    active = true;
}

void Subsystem::deactivate()
{
    active = false;
}

void Subsystem::displayStatus() const
{
    std::cout << name << " ............ "
        << (active ? "ONLINE" : "OFFLINE")
        << "\n";
}
