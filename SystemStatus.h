#pragma once

#include "Subsystem.h"
#include "SecuritySystem.h"

class SystemStatus : public Subsystem
{
private:
    SecuritySystem& securitySystem;

public:
    SystemStatus(SecuritySystem& securitySystem);
    void display();
};