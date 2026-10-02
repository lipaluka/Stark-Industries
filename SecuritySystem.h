#pragma once

#include "Subsystem.h"

class SecuritySystem : public Subsystem
{
private:
    bool active;

public:
    SecuritySystem();

    void activate();
    void deactivate();
    void displayStatus() const;
};