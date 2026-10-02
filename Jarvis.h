#pragma once

#include <string>
#include "SystemStatus.h"
#include "SecuritySystem.h"

class Jarvis
{
private:
    SystemStatus systemStatus;
    SecuritySystem securitySystem;

public:
    void respond(const std::string& command);
};
