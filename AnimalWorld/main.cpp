#include "Africa.h"
#include "NorthAmerica.h"
#include <iostream>
#include <memory>

using namespace std;

void ShowMenu() 
{
    cout << "Select an option:\n";
    cout << "1. Life in Africa\n";
    cout << "2. Life in North America\n";
    cout << "0. Exit\n";
}

void CreateAndSimulateLife(unique_ptr<Continent>& continent)
{
    int herbivoresCount, carnivoresCount;

    cout << "How many herbivores to create? ";
    cin >> herbivoresCount;
    cout << "How many carnivores to create? ";
    cin >> carnivoresCount;

    for (int i = 0; i < herbivoresCount; ++i)
    {
        unique_ptr<Herbivore> herbivore = continent->CreateHerbivore();
        cout << "Herbivore is grazing.\n";
        herbivore->EatGrass();
    }

    for (int i = 0; i < carnivoresCount; ++i) 
    {
        unique_ptr<Carnivore> carnivore = continent->CreateCarnivore();
        unique_ptr<Herbivore> prey = continent->CreateHerbivore(); 
        cout << "Carnivore is preparing to hunt.\n";

        if (carnivore->GetPower() > prey->GetWeight()) 
        {
            system("color 7C");
            cout << "Carnivore hunted down a herbivore successfully!\n";
            carnivore->Eat(prey.get());
        }
        else
        {
            system("color 0B");
            cout << "Carnivore failed to hunt the herbivore.\n";
            carnivore->Eat(prey.get());
        }
    }
}

int main()
{
    int choice;
    bool running = true;

    while (running)
    {
        system("color 0D");
        ShowMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        system("cls");

        switch (choice)
        {
        case 1:
        {
            system("color 2F");
            unique_ptr<Continent> africa = make_unique<Africa>();
            CreateAndSimulateLife(africa);
            break;
        }
        case 2: 
        {
            system("color 3A");
            unique_ptr<Continent> northAmerica = make_unique<NorthAmerica>();
            CreateAndSimulateLife(northAmerica);
            break;
        }
        case 0:
            running = false;
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}