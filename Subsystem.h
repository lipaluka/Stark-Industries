#pragma once

#include <string>

class Subsystem
{
protected:
    std::string name;
    bool active;

public:
    Subsystem(const std::string& name);

    void activate();
    void deactivate();
    void displayStatus() const;
};

