#include "beverage.h"
#include "houseblend.h"
#include "milk.h"
#include <iostream>

using namespace std;

int main()
{
    Beverage* beverage = new HouseBlend();
    cout << beverage->getDescription() << " $" << beverage->cost() << endl;

    system("PAUSE");
    return 0;
}