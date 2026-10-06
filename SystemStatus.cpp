#include "SystemStatus.h"
#include <iostream>

SystemStatus::SystemStatus(SecuritySystem& securitySystem, CoreSystem& coreSystem, NetworkSystem& networkSystem)
    : Subsystem("System Status"),
    securitySystem(securitySystem),
    coreSystem(coreSystem),
    networkSystem(networkSystem)
{
}

void SystemStatus::display()
{
    std::cout << "\nSTARK SYSTEM STATUS\n\n";
    coreSystem.displayStatus();
    securitySystem.displayStatus();
    networkSystem.displayStatus();
    
}