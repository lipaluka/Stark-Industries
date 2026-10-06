#include "CoreSystem.h"
#include <iostream>

CoreSystem::CoreSystem()
    : Subsystem("Core"), active(true)
{
}

void CoreSystem::activate()
{
    active = true;
}

void CoreSystem::deactivate()
{
    active = false;
}

void CoreSystem::displayStatus() const
{
    std::cout << name << " ............ "
        << (active ? "ONLINE" : "OFFLINE")
        << "\n";
}