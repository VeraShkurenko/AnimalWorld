#include "Wildebeest.h"
#include <iostream>
using namespace std;

Wildebeest::Wildebeest(int weight, bool life) : Herbivore(weight, life) {}

void Wildebeest::EatGrass() 
{
    weight += 10;
    cout << "Wildebeest eats grass, weight is now " << weight << endl;
}