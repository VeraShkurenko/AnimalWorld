#pragma once
#include "Carnivore.h"

class Wolf : public Carnivore 
{
public:
    Wolf(int power);
    void Eat(Herbivore* herbivore) override;
};