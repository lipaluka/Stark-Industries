#include "CommandProcessor.h"
#include "Jarvis.h"

CommandProcessor::CommandProcessor(Jarvis& jarvis)
    : jarvis(jarvis)
{
}

void CommandProcessor::processCommand(const std::string& command)
{
    jarvis.respond(command);
}