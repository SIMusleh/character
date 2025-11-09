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
    
    //Basic attack
    virtual void basicAttack (Character&target);

    //Tostring
    virtual std::string tostring() const;

    //Fighter class
    class Fighter : public Character {
    public:
        Fighter(std::string name);
        std::string toString() const override;
        void strongAttack(Character&target);
        std::string toString() const override;
    };

    //Rogue class
    class Rogue : public Character {
    public:
        Rogue(std::string name);
        void steal(Character&target);
        std::string toString() const override;
    };

    //Magician class
    class Magician : public Character {
    public:
        Magician(std::string name);
        void cast(Character&target);
        std::string toString() const override;
    };
 }

