#pragma once

#include "Subsystem.h"

class CoreSystem : public Subsystem
{
private:
    bool active;

public:
    CoreSystem();

    void activate();
    void deactivate();
    void displayStatus() const;
};
