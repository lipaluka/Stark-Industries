#include "SystemStatus.h"
#include <iostream>

SystemStatus::SystemStatus(const std::vector<Subsystem*>& subsystems)
    : Subsystem("System Status"), subsystems(subsystems)
{
}

void SystemStatus::display() const
{
    std::cout << "\nSTARK SYSTEM STATUS\n\n";

    for (const Subsystem* subsystem : subsystems)
    {
        subsystem->displayStatus();
    }
}
