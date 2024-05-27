#pragma once
#include <string>

//CAnimal use declare firstly
class CAnimal
{
public:
    CAnimal();
    virtual ~CAnimal() {};

    virtual std::string Say() { return m_sound; };
    virtual std::string Move() { return m_move; };
    friend class CAnimalFarm;
protected:
    std::string m_sound;
    std::string m_move;
};

//Change public to protected, C2243 error
class CDog : public CAnimal
{
public:
    CDog() { m_sound = "woof!!"; };
    virtual ~CDog() {};
};

class CCat : public CAnimal
{
public:
    CCat() { m_sound = "meow~"; };
    virtual ~CCat() {};
};

class CCow : public CAnimal
{
public:
    CCow() { m_sound = "moo~~~"; };
    virtual ~CCow() {};
};

class CBird : public CAnimal
{
public:
    CBird();
    virtual ~CBird() {};
};

class CFrog : public CAnimal
{
public:
    CFrog();
    virtual ~CFrog() {};
};

class CDuck : public CAnimal
{
public:
    CDuck();
    virtual ~CDuck() {};
};

class CMouse : public CAnimal
{
public:
    CMouse() { m_sound = "squeek!"; };
    virtual ~CMouse() {};
};

class CSnake : public CAnimal
{
public:
    CSnake();
    virtual ~CSnake() {};
};

class CFish : public CAnimal
{
public:
    CFish();
    virtual ~CFish() {};
};


class CAnimalFarm
{
public:
    CAnimalFarm() {};
    virtual ~CAnimalFarm() {};

    CAnimal* CallAnimal(std::string animal_species);
    //CAnimal* CallAnimalEx(std::string animal_species);
};
