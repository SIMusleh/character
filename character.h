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

public:
    Character(std::string name, double hp, double mp, int strength, int dexterity, int intelligence, int speed, int endurance, int faith);

    virtual ~Character() {}

    //Getters
    std::string getName() const;
    double getHP() const;
    double getMP() const;
    int getStrength() const;
    int getDexterity() const;
    int getIntelligence () const;
    int getSpeed() const;
    int getEndurance() const;
    int getFaith() const;

    //Setters
    void setHP(double hp);
    void setMP(double mp);
    
 }
