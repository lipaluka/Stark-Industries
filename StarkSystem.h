#pragma once

#include "Jarvis.h"
#include "CommandProcessor.h"

class StarkSystem
{
private:
    Jarvis jarvis;
    CommandProcessor commandProcessor;

public:
    StarkSystem();
    void start();
};