#pragma once

#include <string>

class Jarvis;

class CommandProcessor
{
private:
    Jarvis& jarvis;

public:
    CommandProcessor(Jarvis& jarvis);
    void processCommand(const std::string& command);
};
