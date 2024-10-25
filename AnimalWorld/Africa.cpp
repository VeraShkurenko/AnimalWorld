#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"
using namespace std;

unique_ptr<Herbivore> Africa::CreateHerbivore() 
{
    return make_unique<Wildebeest>(100, true);
}

unique_ptr<Carnivore> Africa::CreateCarnivore() 
{
    return make_unique<Lion>(150);
}