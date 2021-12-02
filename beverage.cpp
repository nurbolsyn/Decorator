#include "beverage.h"

Beverage::Beverage() {
    description = new char[200];
    strcpy_s(description, 200, "Unknown Beverage");
}

char* Beverage::getDescription() {
    return description;
}