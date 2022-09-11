# Project Owner
**Name**: Allissa Hertz

**Student ID**: 995272111

## Structure of Program

There are three files, a Creature.h header file, Creature.cpp file, and a main.cpp file.

The Creater.h header file contains 6 classes: Creature, Human, Elf, Demon, Cyberdemon, and Balrog. The Creature class serves as the base class for all other classes. This contains the private members strength and hitpoints, the protected member species, and the public members getDamage and print. Each child class inherits strength, hitpoints, and getDamage. The Cyberdemon and Balrog classes inherit from the demon class.

The Creature.cpp file includes accessor functions for private variables. It also contains the logic for the getDamage and print functions. The getDamage function returns random damage based on the class' strength. The print function prints out the hp and strength of each creature. Each class has it's own modified getDamage function that changes based on specific circumstances for the class type. Elves do double damage 10 percent of the time. Demons inflict extra damage 5 percent of the time and Balrogs always attack twice. Each species is assigned to the class in the constructor as a classType.

The main.cpp file prints out each class, assigns it a strength and hp I picked at random, calls the print function and calls getDamage. This results in the name of each class followed by a hp and strength value, the name of the class, and the amount of damage points inflicted being print out.

## Program Status

This program works completely. There are currently no known issues.

## Testing

This program was tested on a MacBook Pro running macOS Monterey version 12.3. 

## How to Compile

Run 'make' using the submitted makefile to compile the program.

