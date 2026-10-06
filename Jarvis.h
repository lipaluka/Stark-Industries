#pragma once

#include <string>
#include "SystemStatus.h"
#include "SecuritySystem.h"

class Jarvis
{
private:
    SecuritySystem securitySystem;
    SystemStatus systemStatus;

public:
    Jarvis();
    void respond(const std::string& command);
};
