/* Program name: character.h
 * Author: Sahar Musleh
 * Date last updated: 11/07/25
 * Purpose: Define RPG character types using shared traits and labels
 */

 #ifndef CHARACTER_H
 #define CHARACTER_H

 #include <string>

//Enum for character class types
 enum CharacterClass { FIGHTER, ROGUE, MAGICIAN, CLERIC };

 class Character {
    protected:
        std::string name;
        double hp;
        double mp;
        int strength;
        int dexterity;
        int intelligence;
        int speed;
        int endurance;
        int faith;
 }
