#pragma once

#include <string>
#include <vector>

class Jarvis;

class CommandProcessor
{
private:
    Jarvis& jarvis;
    std::vector<std::string> commands;

public:
    CommandProcessor(Jarvis& jarvis);
    void processCommand(const std::string& command);
};
