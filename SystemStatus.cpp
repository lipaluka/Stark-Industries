#include "SystemStatus.h"
#include <iostream>

SystemStatus::SystemStatus()
    : Subsystem("System Status")
{
}

void SystemStatus::display()
{
    std::cout << "\nSTARK SYSTEM STATUS\n\n";
    std::cout << "Core ............ ONLINE\n";
    std::cout << "Network ......... ONLINE\n";
    std::cout << "Security ........ ONLINE\n";
    std::cout << "Power ........... ONLINE\n";
}