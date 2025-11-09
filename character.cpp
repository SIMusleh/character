/* Program name: character.cpp
 * Author: Sahar Musleh
 * Date last updated: 11/8/2025
 * Purpose: Implementation of RPG character classes and their abilities
 */

 #include "character.h"
 #include <iostream>
 #include <iomanip>
 #include <cstdlib>
 #include <sstream>

 //Character base class

Character::Character(std::string name, double hp, double mp, int strength, int dexterity, 
    int intelligence, int speed, int endurance, int faith)
    : name(name), hp(hp), mp(mp), strength(strength), dexterity(dexterity),
intelligence(intelligence), speed(speed), endurance(endurance), faith(faith) {}

std::string Character::getName() const { return name; }
double Character::getHP() const { return hp; }
double Character::getMP() const { return mp; }
int Character::getStrength() const { return strength; }
int Character::getDexterity() const { return dexterity; }
int Character::getIntelligence() const { return intelligence; }
int Character::getSpeed() const { return speed; }
int Character::getEndurance() const { return endurance; }
int Character::getFaith() const { return faith; }

void Character::setHP(double hpVal) { hp = hpVal; }
void Character::setMP(double mpVal) { mp = mpVal; }

void Character::basicAttack(Character& target) {
    target.hp -= strength;
}

std::string Character::toString() const {
    std::ostringstream out;
    out << std::fixed << std::setprecision(2);
    out << name << " stats:\n"
        << "HP: " << hp << "\n"
        << "MP: " << mp << "\n"
        << "Strength: " << strength << "\n"
        << "Dexterity: " << dexterity << "\n"
        << "Intelligence: " << intelligence << "\n"
        << "Speed: " << speed << "\n"
        << "Endurance: " << endurance << "\n"
        << "Faith: " << faith << "\n";
    return out.str();
}

//Fighter

Fighter::Fighter(std::string name)
    :Character(name, 300, 0, 16, 10, 5, 8, 15, 5) {}

void Fighter::strongAttack(Character& target) {
    double damage = strength + endurance;
    target.setHP(target.getHP() - damage);
}

std::string Fighter::toString() const {
    return Character::toString();
}

