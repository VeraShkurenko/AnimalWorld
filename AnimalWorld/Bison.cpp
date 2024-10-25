#include "Bison.h"
#include <iostream>
using namespace std;

Bison::Bison(int weight, bool life) : Herbivore(weight, life) {}

void Bison::EatGrass() 
{
    weight += 10;
    cout << "Bison eats grass, weight is now " << weight << endl;
}