#pragma once
#include "Carnivore.h"

class Lion : public Carnivore 
{
public:
    Lion(int power);
    void Eat(Herbivore* herbivore) override;
};
