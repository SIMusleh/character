/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/8/2025
 * Purpose: Main program to demonstrate RPG character classes and their abilities
 */

#include "character.h"
#include <iostream>

int main() {
    std::string fighterName, rogueName, magicianName, clericName;

    std::cout << "What is your fighter's name: ";
    std::getline(std::cin, fighterName);
    Fighter fighter(fighterName);

    std::cout << "What is your rogue's name: ";
    std::getline(std::cin, rogueName);
    Rogue rogue(rogueName);

    std::cout << "What is your magician's name: ";
    std::getline(std::cin, magicianName);
    Magician magician(magicianName);

    std::cout << "What is your cleric's name: ";
    std::getline(std::cin, clericName);
    Cleric cleric(clericName);

// Rogue steals from Fighter
    std::cout << rogue.getName() << " Steal " << fighter.getName() << "\n";
    rogue.steal(fighter);

    std::cout << "Updated Rogue Stats\n";
    std::cout << rogue.toString() << "\n";

    std::cout << "Updated Fighter Stats\n";
    std::cout << fighter.toString() << "\n";
