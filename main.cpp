/* Program name: main.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/8/2025
 * Purpose: Main program to demonstrate RPG character classes and their abilities
 */

#include "character.h"
#include <iostream>

int main() {
    std::string fighterName, rogueName, magicianName, clericName;

    std::cout << "What is your fighter's name: \n";
    std::getline(std::cin, fighterName);
    Fighter fighter(fighterName);

    std::cout << "What is your rogue's name: \n";
    std::getline(std::cin, rogueName);
    Rogue rogue(rogueName);

    std::cout << "What is your magician's name: \n";
    std::getline(std::cin, magicianName);
    Magician magician(magicianName);

    std::cout << "What is your cleric's name: \n";
    std::getline(std::cin, clericName);
    Cleric cleric(clericName);

    std::cout << "\nTesting\n";

    // Fighter attacks Rogue
    std::cout << "Fighter Starting Stats\n";
    std::cout << fighter.toString() << "\n";

    std::cout << "Rogue Starting Stats\n";
    std::cout << rogue.toString() << "\n";

    std::cout << fighter.getName() << " Strong Attack " << rogue.getName() << "\n";
    fighter.strongAttack(rogue);

    std::cout << "Updated Rogue Stats\n";
    std::cout << rogue.toString() << "\n";

    // Rogue steals from Fighter
    std::cout << rogue.getName() << " Steal " << fighter.getName() << "\n";
    rogue.steal(fighter);

    std::cout << "Updated Rogue Stats\n";
    std::cout << rogue.toString() << "\n";

    std::cout << "Updated Fighter Stats\n";
    std::cout << fighter.toString() << "\n";

    // Magician casts on Rogue
    std::cout << "\nMagician Starting Stats\n";
    std::cout << magician.toString() << "\n";

    std::cout << magician.getName() << " Cast " << rogue.getName() << "\n";
    magician.cast(rogue);

    std::cout << "Updated Magician Stats\n";
    std::cout << magician.toString() << "\n";

    std::cout << "Updated Rogue Stats\n";
    std::cout << rogue.toString() << "\n";

    // Cleric heals Rogue
    std::cout << "\nStarting Cleric Stats\n";
    std::cout << cleric.toString() << "\n";

    std::cout << cleric.getName() << " Heal " << rogue.getName() << "\n";
    cleric.heal(rogue);

    std::cout << "Updated Cleric Stats\n";
    std::cout << cleric.toString() << "\n";

    std::cout << "Updated Rogue Stats\n";
    std::cout << rogue.toString() << "\n";

    return 0;
}
