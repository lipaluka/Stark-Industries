#include "CommandProcessor.h"
#include "Jarvis.h"

CommandProcessor::CommandProcessor(Jarvis& jarvis)
    : jarvis(jarvis)
{
    commands.push_back("help");
    commands.push_back("status");
    commands.push_back("shutdown");
    commands.push_back("security");
}

void CommandProcessor::processCommand(const std::string& command)
{
    if (command == "help")
    {
        jarvis.respond(command);
        return;
    }

    if (command == "status")
    {
        jarvis.respond(command);
        return;
    }

    if (command == "shutdown")
    {
        jarvis.respond(command);
        return;
    }
    if (command == "security")
    {
        jarvis.respond(command);
        return;
    }

    jarvis.respond("unknown");
}