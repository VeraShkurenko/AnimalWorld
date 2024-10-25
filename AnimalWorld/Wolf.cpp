#include "Wolf.h"
#include <iostream>
using namespace std;

Wolf::Wolf(int power) : Carnivore(power) {}

void Wolf::Eat(Herbivore* herbivore)
{
    if (power > herbivore->GetWeight()) 
    {
        power += 10;
        cout << "Wolf eats the herbivore, power increases to " << power << endl;
    }
    else
    {
        power -= 10;
        cout << "Wolf fails to eat the herbivore, power decreases to " << power << endl;
    }
}
