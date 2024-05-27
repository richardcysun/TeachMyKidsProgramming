// AnimalSayStd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string animal_species;
    while (true)
    {
        std::cout << "Type an anmimal species to hear what it says (type exit to stop)..." << std::endl;
        std::cin >> animal_species;
        if (animal_species.compare("exit") == 0)
            break;
        else if (animal_species.compare("dog") == 0)
            std::cout << "The " << animal_species << " says " << "woof!!" << std::endl;
        else if (animal_species.compare("cat") == 0)
            std::cout << "The " << animal_species << " says " << "meow~" << std::endl;
        else if (animal_species.compare("cow") == 0)
            std::cout << "The " << animal_species << " says " << "moo~~~" << std::endl;
        else if (animal_species.compare("mouse") == 0)
            std::cout << "The " << animal_species << " says " << "squeek!" << std::endl;
        else if (animal_species.compare("duck") == 0)
            std::cout << "The " << animal_species << " says " << "quack!" << std::endl;
        else if (animal_species.compare("frog") == 0)
            std::cout << "The " << animal_species << " says " << "croak!" << std::endl;
        else if (animal_species.compare("bird") == 0)
            std::cout << "The " << animal_species << " says " << "tweet!" << std::endl;
        else
            std::cout << "The " << animal_species << " says " << "......" << std::endl;
    }
}
