#include "Jarvis.h"
#include <iostream>

Jarvis::Jarvis()
    : securitySystem(), systemStatus(securitySystem)
{
}

void Jarvis::respond(const std::string& command)
{
    if (command == "help")
    {
        std::cout << "\nAvailable commands:\n";
        std::cout << "help\n";
        std::cout << "status\n";
        std::cout << "shutdown\n";
        std::cout << "security\n";
        std::cout << "security on\n";
        std::cout << "security off\n";
    }
    else if (command == "status")
    {
        systemStatus.display();
    }
    else if (command == "shutdown")
    {
        std::cout << "\nUnderstood. Shutting down Stark System.\n";
    }
    else if (command == "security")
    {
        securitySystem.displayStatus();
    }
    else if (command == "security on")
    {
        securitySystem.activate();
        std::cout << "\nSecurity system activated.\n";
    }
    else if (command == "security off")
    {
        securitySystem.deactivate();
        std::cout << "\nSecurity system deactivated.\n";
    }
    else
    {
        std::cout << "\nUnknown command.\n";
    }
}