#pragma once
#include "Continent.h"

class NorthAmerica : public Continent
{
public:
    unique_ptr<Herbivore> CreateHerbivore() override;
    unique_ptr<Carnivore> CreateCarnivore() override;
};
