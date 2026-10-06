#pragma once

#include "Subsystem.h"

class PowerSystem : public Subsystem
{
private:
    bool active;

public:
    PowerSystem();

    void activate();
    void deactivate();
    void displayStatus() const;
};
