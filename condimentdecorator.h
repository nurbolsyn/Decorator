#pragma once
#include "beverage.h"

class CondimentDecorator : public Beverage {
public:
    virtual char* getDescription() = 0;
};