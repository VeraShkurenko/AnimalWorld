#include "NorthAmerica.h"
#include "Bison.h"
#include "Wolf.h"
using namespace std;

unique_ptr<Herbivore> NorthAmerica::CreateHerbivore() 
{
    return make_unique<Bison>(200, true);
}

unique_ptr<Carnivore> NorthAmerica::CreateCarnivore()
{
    return make_unique<Wolf>(120);
}
