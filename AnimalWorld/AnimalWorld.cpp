#include "AnimalWorld.h"
using namespace std;

AnimalWorld::AnimalWorld(unique_ptr<Continent> continent) : continent(move(continent)) {}

void AnimalWorld::MealsHerbivores()
{
    for (const auto& herbivore : continent->GetHerbivores()) 
    {
        herbivore->EatGrass();
    }
}

void AnimalWorld::NutritionCarnivores() 
{
    for (const auto& carnivore : continent->GetCarnivores())
    {
        for (const auto& herbivore : continent->GetHerbivores()) 
        {
            carnivore->Eat(herbivore.get());
        }
    }
}
