//
//  Header.h
//  InheritanceProject
//
//  Created by Allissa Hertz on 4/10/22.
//
#ifndef Header_h
#define Header_h

class Creature
{
private:
    int strength;
    int hitpoints;
protected:
    std::string species;
public:
    //std::string species;

    Creature(): strength(0), hitpoints(0){}
    Creature(int str, int hp):strength(str),hitpoints(hp){}
    int getDamage();

    int getStrength() const;
    int getHitpoints() const;
    std::string getSpecies() const;

    void setStrength(int str);
    void setHitpoints(int hp);
    std::string setSpecies() const;

    void print() const;
};

class Human: public Creature
{
public:
    Human(int str, int hp);
    int getDamage();
};

class Elf: public Creature
{
public:
    Elf(int str, int hp);
    int getDamage();
};

class Demon: public Creature
{
public:
    Demon(int str, int hp);
    Demon(int str, int hp, std::string classType);
    int getDamage();
};

class Cyberdemon: public Demon
{
public:
    Cyberdemon(int str, int hp);
    int getDamage();
};

class Balrog: public Demon
{
public:
    Balrog(int str, int hp);
    int getDamage();
};

#endif /* Header_h */