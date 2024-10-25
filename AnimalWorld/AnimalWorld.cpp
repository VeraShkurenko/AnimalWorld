#include "AnimalWorld.h"
#include "Continent.h"
#include <memory>
using namespace std;

AnimalWorld::AnimalWorld(std::unique_ptr<Continent> c) : continent(move(c)) {}

void AnimalWorld::MealsHerbivores(int count) 
{
    for (int i = 0; i < count; ++i) {
        auto herbivore = continent->CreateHerbivore();
        herbivore->EatGrass();
    }
}

void AnimalWorld::NutritionCarnivores(int count)
{
    for (int i = 0; i < count; ++i)
    {
        auto carnivore = continent->CreateCarnivore();
        auto prey = continent->CreateHerbivore();

        if (carnivore->GetPower() > prey->GetWeight())
        {
            carnivore->Eat(prey.get());
        }
        else
        {
            carnivore->Eat(prey.get());
        }
    }
}
