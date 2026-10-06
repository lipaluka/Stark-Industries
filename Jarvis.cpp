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
    else
    {
        std::cout << "\nUnknown command.\n";
    }
}