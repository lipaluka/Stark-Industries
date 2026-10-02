#include "SecuritySystem.h"
#include <iostream>

SecuritySystem::SecuritySystem()
    : Subsystem("Security"), active(true)
{
}

void SecuritySystem::activate()
{
    active = true;
}

void SecuritySystem::deactivate()
{
    active = false;
}

void SecuritySystem::displayStatus() const
{
    std::cout << name << " ............ "
        << (active ? "ONLINE" : "OFFLINE")
        << "\n";
}