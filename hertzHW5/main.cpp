#include <iostream>
#include "Creature.h"
using namespace std;

int main() {

    cout << endl << "Human:" << endl;
    Human human(12, 12);
    human.print();
    human.getDamage();

    cout << endl << "Elf:" << endl;
    Elf elf(15, 15);
    elf.print();
    elf.getDamage();

    cout << endl << "Demon" << endl;
    Demon demon(20, 20);
    demon.print();
    demon.getDamage();

    cout << endl << "Cyberdemon" << endl;
    Cyberdemon cyberdemon(23, 23);
    cyberdemon.print();
    cyberdemon.getDamage();

    cout << endl << "Balrogs" << endl;
    Balrog balrog(30,30);
    balrog.print();
    balrog.getDamage();

    return 0;
}
