#pragma once
#include "Herbivore.h"

class Wildebeest : public Herbivore 
{
public:
    Wildebeest(int weight, bool life);
    void EatGrass() override;
};
