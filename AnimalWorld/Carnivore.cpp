#include "Carnivore.h"
using namespace std;

Carnivore::Carnivore(int power) : power(power) {}

int Carnivore::GetPower() const
{
    return power;
}

void Carnivore::SetPower(int power) 
{
    this->power = power;
}
