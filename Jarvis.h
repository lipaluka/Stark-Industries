#pragma once

#include <string>
#include "SystemStatus.h"
#include "SecuritySystem.h"
#include "CoreSystem.h"

class Jarvis
{
private:
    SecuritySystem securitySystem;
    CoreSystem coreSystem;
    SystemStatus systemStatus;

public:
    Jarvis();
    void respond(const std::string& command);
};
