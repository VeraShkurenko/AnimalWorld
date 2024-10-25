#pragma once
#include "Herbivore.h"
#include "Carnivore.h"
#include <vector>
#include <memory>
using namespace std;

class Continent 
{
protected:
    vector<unique_ptr<Herbivore>> herbivores;
    vector<unique_ptr<Carnivore>> carnivores;

public:
    virtual unique_ptr<Herbivore> CreateHerbivore() = 0;
    virtual unique_ptr<Carnivore> CreateCarnivore() = 0;

    void AddHerbivore(unique_ptr<Herbivore> herbivore);
    void AddCarnivore(unique_ptr<Carnivore> carnivore);

    const vector<unique_ptr<Herbivore>>& GetHerbivores() const;
    const vector<unique_ptr<Carnivore>>& GetCarnivores() const;
};

