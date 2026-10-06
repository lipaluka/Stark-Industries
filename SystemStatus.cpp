#include "SystemStatus.h"
#include <iostream>

SystemStatus::SystemStatus(SecuritySystem& securitySystem, CoreSystem& coreSystem, NetworkSystem& networkSystem,
    PowerSystem& powerSystem)
    : Subsystem("System Status"),
    securitySystem(securitySystem),
    coreSystem(coreSystem),
    networkSystem(networkSystem),
    powerSystem(powerSystem)
{
}

void SystemStatus::display()
{
    std::cout << "\nSTARK SYSTEM STATUS\n\n";
    coreSystem.displayStatus();
    securitySystem.displayStatus();
    networkSystem.displayStatus();
    powerSystem.displayStatus();
    
}