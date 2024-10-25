#pragma once
#include "Continent.h"
#include <memory>
using namespace std;

class AnimalWorld
{
private:
    unique_ptr<Continent> continent;

public:
    AnimalWorld(unique_ptr<Continent> continent);
    void MealsHerbivores();
    void NutritionCarnivores();
};

