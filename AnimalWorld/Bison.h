#pragma once
#include "Herbivore.h"

class Bison : public Herbivore 
{
public:
    Bison(int weight, bool life);
    void EatGrass() override;
};

