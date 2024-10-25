#pragma once
#include "Continent.h"
#include <memory>
using namespace std;

class AnimalWorld
{
private:
    unique_ptr<Continent> continent;
public:
    AnimalWorld(unique_ptr<Continent> c);
    void MealsHerbivores(int count);
    void NutritionCarnivores(int count);
};

