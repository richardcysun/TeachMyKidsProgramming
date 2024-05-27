#include "AnimalFarm.h"
#include <iostream>

CAnimal::CAnimal()
{
    m_sound = "......";
    m_move = "runs";
};

CFish::CFish() 
{ 
    m_sound = "blub..."; 
    m_move = "swims";
};

CBird::CBird()
{
    m_sound = "tweet!";
    m_move = "flies";
};

CDuck::CDuck()
{
    m_sound = "quack!";
    m_move = "walks";
};

CFrog::CFrog()
{
    m_sound = "croak!";
    m_move = "jumps";
};

CSnake::CSnake()
{
    m_sound = "hiss...";
    m_move = "crawls";
};

CAnimal* CAnimalFarm::CallAnimal(std::string animal_species)
{
    if (animal_species.compare("dog") == 0)
        return new CDog;
    else if (animal_species.compare("cat") == 0)
        return new CCat;
    else if (animal_species.compare("cow") == 0)
        return new CCow;
    else if (animal_species.compare("mouse") == 0)
        return new CMouse;
    else if (animal_species.compare("duck") == 0)
        return new CDuck;
    else if (animal_species.compare("frog") == 0)
        return new CFrog;
    else if (animal_species.compare("bird") == 0)
        return new CBird;
    else if (animal_species.compare("fish") == 0)
        return new CFish;
    else if (animal_species.compare("snake") == 0)
        return new CSnake;
    return new CAnimal();
}

//This is another way to do the same thing
//CAnimal* CAnimalFarm::CallAnimalEx(std::string animal_species)
//{
//    CAnimal* candidate;
//    if (animal_species.compare("dog") == 0)
//        candidate = new CDog;
//    else if (animal_species.compare("cat") == 0)
//        candidate = new CCat;
//    else if (animal_species.compare("cow") == 0)
//        candidate = new CCow;
//    else if (animal_species.compare("mouse") == 0)
//        candidate = new CMouse;
//    else if (animal_species.compare("duck") == 0)
//        candidate = new CDuck;
//    else if (animal_species.compare("frog") == 0)
//        candidate = new CDuck;
//    else if (animal_species.compare("bird") == 0)
//        candidate = new CBird;
//    else 
//        candidate = new CAnimal();
//    return candidate;
//}