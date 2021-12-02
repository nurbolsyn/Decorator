#include "houseblend.h"

HouseBlend::HouseBlend() {
    description = new char[200];
    strcpy_s(description, 200, "House Blend Coffee");
}

double HouseBlend::cost() {
    return 140;
}