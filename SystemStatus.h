#pragma once

#include "Subsystem.h"
#include "SecuritySystem.h"
#include "CoreSystem.h"
#include "NetworkSystem.h"

class SystemStatus : public Subsystem
{
private:
    SecuritySystem& securitySystem;
    CoreSystem& coreSystem;
    NetworkSystem& networkSystem;

public:
    SystemStatus(SecuritySystem& securitySystem, CoreSystem& coreSystem, NetworkSystem& networkSystem);
    void display();
};