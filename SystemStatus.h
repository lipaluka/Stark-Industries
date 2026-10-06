#pragma once

#include "Subsystem.h"
#include "SecuritySystem.h"
#include "CoreSystem.h"
#include "NetworkSystem.h"
#include "PowerSystem.h"

class SystemStatus : public Subsystem
{
private:
    SecuritySystem& securitySystem;
    CoreSystem& coreSystem;
    NetworkSystem& networkSystem;
    PowerSystem& powerSystem;

public:
    SystemStatus(SecuritySystem& securitySystem, CoreSystem& coreSystem, NetworkSystem& networkSystem, 
        PowerSystem& powerSystem);
    void display();
};