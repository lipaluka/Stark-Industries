#pragma once

#include <string>
#include "SystemStatus.h"

class Jarvis
{
private:
    SystemStatus systemStatus;

public:
    void respond(const std::string& command);
};
