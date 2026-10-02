#pragma once

#include <string>

class Subsystem
{
protected:
    std::string name;

public:
    Subsystem(const std::string& name);
    const std::string& getName() const;
};
