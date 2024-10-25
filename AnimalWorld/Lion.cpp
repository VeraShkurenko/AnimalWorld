#include "Lion.h"
#include <iostream>
using namespace std;

Lion::Lion(int power) : Carnivore(power) {}

void Lion::Eat(Herbivore* herbivore) 
{
    if (power > herbivore->GetWeight()) 
    {
        power += 10;
        cout << "Lion eats the herbivore, power increases to " << power << endl;
    }
    else
    {
        power -= 10;
        cout << "Lion fails to eat the herbivore, power decreases to " << power << endl;
    }
}
