#include "SystemStatus.h"
#include <iostream>

SystemStatus::SystemStatus(SecuritySystem& securitySystem)
    : Subsystem("System Status"), securitySystem(securitySystem)
{
}

void SystemStatus::display()
{
    std::cout << "\nSTARK SYSTEM STATUS\n\n";
    securitySystem.displayStatus();
}