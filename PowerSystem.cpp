#include "PowerSystem.h"
#include <iostream>

PowerSystem::PowerSystem()
    : Subsystem("Power"), active(true)
{
}

void PowerSystem::activate()
{
    active = true;
}

void PowerSystem::deactivate()
{
    active = false;
}

void PowerSystem::displayStatus() const
{
    std::cout << name << " ............ "
        << (active ? "ONLINE" : "OFFLINE")
        << "\n";
}