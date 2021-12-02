#pragma once
#include <string.h>

class Beverage {
public:
    Beverage();
    char* description;
    char* getDescription();
    virtual double cost() = 0;
};