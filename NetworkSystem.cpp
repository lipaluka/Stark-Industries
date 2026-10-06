#include "NetworkSystem.h"
#include <iostream>

NetworkSystem::NetworkSystem()
    : Subsystem("Network"), active(true)
{
}

void NetworkSystem::activate()
{
    active = true;
}

void NetworkSystem::deactivate()
{
    active = false;
}

void NetworkSystem::displayStatus() const
{
    std::cout << name << " ............ "
        << (active ? "ONLINE" : "OFFLINE")
        << "\n";
}