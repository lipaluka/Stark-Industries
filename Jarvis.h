#pragma once

#include <string>
#include "SystemStatus.h"
#include "SecuritySystem.h"
#include "CoreSystem.h"
#include "NetworkSystem.h"
#include "PowerSystem.h"

class Jarvis
{
private:
    SecuritySystem securitySystem;
    CoreSystem coreSystem;
    NetworkSystem networkSystem;
    SystemStatus systemStatus;
    PowerSystem powerSystem;

public:
    Jarvis();
    void respond(const std::string& command);
};
