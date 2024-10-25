#include "Herbivore.h"
using namespace std;

Herbivore::Herbivore(int weight, bool life) : weight(weight), life(life) {}

int Herbivore::GetWeight() const 
{
    return weight;
}

bool Herbivore::Life() const 
{
    return life;
}