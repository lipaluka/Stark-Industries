#include "StarkSystem.h"
#include <iostream>

void StarkSystem::start()
{
    std::cout << "STARK INDUSTRIES\n";
    std::cout << "JARVIS SYSTEM INITIALIZING...\n";
    std::cout << "JARVIS ONLINE\n";

    std::string command;

    while (command != "shutdown")
    {
        std::cout << "\n> ";
        std::getline(std::cin, command);

        commandProcessor.processCommand(command);
    }
}