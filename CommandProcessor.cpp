#include "CommandProcessor.h"
#include <iostream>

void CommandProcessor::processCommand(const std::string& command)
{
    if (command == "help")
    {
        std::cout << "\nAvailable commands:\n";
        std::cout << "help\n";
        std::cout << "status\n";
        std::cout << "shutdown\n";
    }
    else if (command == "status")
    {
        std::cout << "\nSystem status: ONLINE\n";
    }
    else if (command == "shutdown")
    {
        std::cout << "\nJARVIS SYSTEM SHUTTING DOWN...\n";
    }
    else
    {
        std::cout << "\nUnknown command.\n";
    }
}