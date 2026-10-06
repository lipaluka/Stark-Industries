#pragma once

#include <string>
#include "SystemStatus.h"
#include "SecuritySystem.h"
#include "CoreSystem.h"
#include "NetworkSystem.h"

class Jarvis
{
private:
    SecuritySystem securitySystem;
    CoreSystem coreSystem;
    NetworkSystem networkSystem;
    SystemStatus systemStatus;

public:
    Jarvis();
    void respond(const std::string& command);
};
