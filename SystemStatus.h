#pragma once

#include "Subsystem.h"
#include <vector>

class SystemStatus : public Subsystem
{
private:
    std::vector<Subsystem*> subsystems;

public:
    SystemStatus(const std::vector<Subsystem*>& subsystems);
    void display() const;
};
