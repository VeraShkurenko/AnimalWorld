#pragma once
#include "Herbivore.h"

class Carnivore 
{
protected:
    int power;

public:
    Carnivore(int power);
    virtual void Eat(Herbivore* herbivore) = 0;
    int GetPower() const;
    void SetPower(int power);
};
