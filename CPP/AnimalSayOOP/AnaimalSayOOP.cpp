// AnaimalSayOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AnimalFarm.h"

int main()
{
    std::string animal_species;
    while (true)
    {
        std::cout << "Type an anmimal species to hear what it says (type exit to stop)..." << std::endl;
        std::cin >> animal_species;
        if (animal_species.compare("exit") == 0)
            break;

        CAnimalFarm animal_farm;
        CAnimal* animal = animal_farm.CallAnimal(animal_species);
        std::cout << "A " << animal_species << " " << animal->Move() << " here and says " << animal->Say() << std::endl;

        delete animal;
    }
}
