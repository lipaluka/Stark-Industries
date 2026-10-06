#pragma once

#include "Subsystem.h"

class NetworkSystem : public Subsystem
{
private:
    bool active;

public:
    NetworkSystem();

    void activate();
    void deactivate();
    void displayStatus() const;
};
