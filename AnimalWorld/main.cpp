#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
#include <iostream>
#include <memory>
using namespace std;

void ShowMenu() 
{
    cout << "Choose an option:\n";
    cout << "1. Life in Africa\n";
    cout << "2. Life in North America\n";
    cout << "0. Exit\n";
}

int main() 
{
    int choice;
    bool running = true;

    while (running) 
    {
        system("color 7C");  
        ShowMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        system("cls");

        switch (choice)
        {
        case 1: 
        {
            unique_ptr<Continent> africa = make_unique<Africa>();
            AnimalWorld animalWorld(move(africa));

            int herbivoresCount, carnivoresCount;
            cout << "Enter number of herbivores: ";
            cin >> herbivoresCount;
            cout << "Enter number of carnivores: ";
            cin >> carnivoresCount;

            system("color 2C");
            animalWorld.MealsHerbivores(herbivoresCount);

            system("color 6C");
            animalWorld.NutritionCarnivores(carnivoresCount);
            break;
        }
        case 2: 
        {
            unique_ptr<Continent> northAmerica = make_unique<NorthAmerica>();
            AnimalWorld animalWorld(move(northAmerica));

            int herbivoresCount, carnivoresCount;
            cout << "Enter number of herbivores: ";
            cin >> herbivoresCount;
            cout << "Enter number of carnivores: ";
            cin >> carnivoresCount;

            system("color 2C");
            animalWorld.MealsHerbivores(herbivoresCount);

            system("color 6C");
            animalWorld.NutritionCarnivores(carnivoresCount);
            break;
        }
        case 0:
            running = false;
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}
