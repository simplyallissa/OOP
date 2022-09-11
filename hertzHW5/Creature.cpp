//
// Created by Allissa Hertz on 4/10/22.
//

#include<iostream>
#include <time.h>
#include <stdlib.h>
#include "Creature.h"

using namespace std;

int damage;


//Accessor functions for private variables

int Creature::getStrength() const
{
    return strength;
}

int Creature::getHitpoints() const
{
    return hitpoints;
}

std::string Creature::getSpecies() const {
    return this -> species;
}

//Mutator functions for private variables

void Creature::setStrength(int str) {
    strength = str;
}

void Creature::setHitpoints(int hp) {
    hitpoints = hp;
}

std::string Creature::setSpecies() const {
    return species;
}

int Creature::getDamage() {
// All creatures inflict damage, which is a
// random number up to their strength
    srand(time(NULL));
    return damage = (rand( ) % strength) + 1;
}

void Creature::print() const
{
    cout << "hp: " << hitpoints << endl;
    cout << "strength: " << strength << endl;
}

Human::Human(int str, int hp):Creature(str, hp){
    this-> species = "Human";
};

int Human::getDamage()
{
        cout << species << " attacks for " << damage << " damage points. You inflicted " << damage << " damage!" << endl;
}

Elf::Elf(int str, int hp):Creature(str, hp){
    this-> species = "Elf";
};

int Elf::getDamage()
{
    damage = Creature::getDamage();
    if ((rand() % 10 ) == 0){
        cout << species << " attacks for " << damage << " damage points. Your magical attack inflicts double damage!" << " You inflicted "
        << damage * 2 << " damage!" << endl;
    } else {
        cout << species << " attacks for " << damage << " damage points. You inflicted " << damage << " damage!" << endl;
    }

}

Demon::Demon(int str, int hp):Creature(str, hp){
    this-> species = "Demon";
};

Demon::Demon(int str, int hp, string classType):Creature(str, hp){
    this->species = classType;
};

int Demon::getDamage()
{
    damage = Creature::getDamage();
    if ((rand( ) % 5) == 0)
    {
        damage = Creature::getDamage() + 50;
        cout << species << " attacks for " << damage << " damage points. Your demonic attack inflicts 50 additional damage points! You inflict "
        << damage << " damage!" << endl;
        return damage;
    } else {
        cout << species << " attacks for " << damage << " damage points. You inflicted " << damage << " damage!" << endl;
        return damage;
    }
}

Cyberdemon::Cyberdemon(int str, int hp): Demon(str, hp, "Cyberdemon"){}

int Cyberdemon::getDamage()
{
    return damage = Demon::getDamage();
}

Balrog::Balrog(int str, int hp): Demon(str, hp, "Balrog") {}

int Balrog::getDamage()
{
    return damage = Demon::getDamage() * 2;
}


