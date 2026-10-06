#include "Jarvis.h"
#include <iostream>

Jarvis::Jarvis()
    : securitySystem(),
    coreSystem(),
    networkSystem(),
    systemStatus(securitySystem, coreSystem, networkSystem)
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
        std::cout << "core\n";
        std::cout << "core on\n";
        std::cout << "core off\n";
        std::cout << "network\n";
        std::cout << "network on\n";
        std::cout << "network off\n";
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
    else if (command == "core")
    {
        coreSystem.displayStatus();
    }
    else if (command == "core on")
    {
        coreSystem.activate();
        std::cout << "\nCore system activated.\n";
    }
    else if (command == "core off")
    {
        coreSystem.deactivate();
        std::cout << "\nCore system deactivated.\n";
    }
    else if (command == "network")
    {
        networkSystem.displayStatus();
    }
    else if (command == "network on")
    {
        networkSystem.activate();
        std::cout << "\nNetwork system activated.\n";
    }
    else if (command == "network off")
    {
        networkSystem.deactivate();
        std::cout << "\nNetwork system deactivated.\n";
    }
    else
    {
        std::cout << "\nUnknown command.\n";
    }

}