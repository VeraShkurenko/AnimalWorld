#pragma once
class Herbivore 
{
protected:
    int weight;
    bool life;

public:
    Herbivore(int weight, bool life);
    virtual void EatGrass() = 0;
    int GetWeight() const;
    bool Life() const;
};



