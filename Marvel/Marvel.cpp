#include <iostream>
using namespace std;

class Ability 
{
public:
    virtual void UseAbility() const = 0;
};

class FlyingAbility : public Ability 
{
public:
    void UseAbility() const 
    {
        cout << "Лiтає\n";
    }
};

class SuperStrengthAbility : public Ability 
{
public:
    void UseAbility() const  
    {
        cout << "Має суперсилу\n";
    }
};

class SuperSpeedAbility : public Ability 
{
public:
    void UseAbility() const  
    {
        cout << "Має супершвидкість\n";
    }
};

class Race
{
public:
    virtual void PrintRace() const = 0;
};

class Human : public Race
{
public:
    virtual void PrintRace() const
    {
        cout << "Людина\n";
    }
};

class Animal : public Race
{
public:
    virtual void PrintRace() const 
    {
        cout << "Тварина\n";
    }
};

class Deity : public Race
{
public:
    virtual void PrintRace() const 
    {
        cout << "Божество\n";
    }
};

class Good 
{
public:
    virtual void PrintLigment() const
    {
        cout << "Хороший\n";
    }
};

class Evil
{
public:
    virtual void PrintLigment() const 
    {
        cout << "Поганий\n";
    }
};

class SuperHero {
public:
    virtual void PrintAbilities() const = 0;
    virtual void PrintRace() const = 0;
    virtual void PrintLigment() const = 0;
};

class SpiderMan : public SuperHero, public SuperStrengthAbility, public Good, public Human
{
public:
    void PrintAbilities() const
    {
        cout << "Человек-паук: \n";
        SuperStrengthAbility::UseAbility();
    }

    void PrintRace() const 
    {
        Human::PrintRace();
    }

    void PrintLigment() const  
{
        Good::PrintLigment();
    }
};

class IronMan : public SuperHero, public FlyingAbility, public SuperStrengthAbility, public Good, public Human
{
public:
    void PrintAbilities() const
    {
        cout << "Железный человек: \n";
        SuperStrengthAbility::UseAbility();
        FlyingAbility::UseAbility();
    }

    void PrintRace() const
    {
        Human::PrintRace();
    }

    void PrintLigment() const
    {
        Good::PrintLigment();
    }

};

class Wolverine : public SuperHero, public SuperStrengthAbility, public Good, public Human
{
public:
    void PrintAbilities() const
    {
        cout << "Росомаха: \n";
        SuperStrengthAbility::UseAbility();
    }

    void PrintRace() const
    {
        Human::PrintRace();
    }

    void PrintLigment() const
    {
        Good::PrintLigment();
    }
};

class Rocket : public SuperHero,  public SuperStrengthAbility, public Good, public Animal
{
public:
    void PrintAbilities() const
    {
        cout << "Ракета: \n";
    }

    void PrintRace() const
    {
        Animal::PrintRace();
    }

    void PrintLigment() const
    {
        Good::PrintLigment();
    }
};

class Thor : public SuperHero, public FlyingAbility, public SuperStrengthAbility, public Good, public Deity
{
public:
    void PrintAbilities() const
    {
        cout << "Тор: \n";
        SuperStrengthAbility::UseAbility();
        FlyingAbility::UseAbility();
    }

    void PrintRace() const
    {
        Deity::PrintRace();
    }

    void PrintLigment() const
    {
        Good::PrintLigment();
    }

};

class Venom : public SuperHero, public SuperStrengthAbility, public Evil, public Deity
{
public:
    void PrintAbilities() const
    {
        cout << "Веном: \n";
        SuperStrengthAbility::UseAbility();
    }

    void PrintRace() const
    {
        Deity::PrintRace();//спорно, но и не человек и не животное
    }

    void PrintLigment() const
    {
        Evil::PrintLigment();
    }
};

int main()
{
    setlocale(LC_ALL, "");

    SpiderMan spider_man;

    spider_man.PrintAbilities();
    spider_man.PrintRace();
    spider_man.PrintLigment();

    cout << "//////////////////////\n";

    IronMan iron_man;

    iron_man.PrintAbilities();
    iron_man.PrintRace();
    iron_man.PrintLigment();

    cout << "//////////////////////\n";

    Wolverine wolverine;

    wolverine.PrintAbilities();
    wolverine.PrintRace();
    wolverine.PrintLigment();

    cout << "//////////////////////\n";

    Rocket rocket;

    rocket.PrintAbilities();
    rocket.PrintRace();
    rocket.PrintLigment();

    cout << "//////////////////////\n";

    Thor thor;

    thor.PrintAbilities();
    thor.PrintRace();
    thor.PrintLigment();

    cout << "//////////////////////\n";

    Venom venom;

    venom.PrintAbilities();
    venom.PrintRace();
    venom.PrintLigment();
}
