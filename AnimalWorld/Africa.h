#pragma once
#include "Continent.h"

class Africa : public Continent 
{
public:
    unique_ptr<Herbivore> CreateHerbivore() override;
    unique_ptr<Carnivore> CreateCarnivore() override;
};
