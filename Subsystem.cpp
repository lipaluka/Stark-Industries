#include "Subsystem.h"

Subsystem::Subsystem(const std::string& name)
    : name(name)
{
}

const std::string& Subsystem::getName() const
{
    return name;
}