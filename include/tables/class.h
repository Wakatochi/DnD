#ifndef CLASS_H
#define CLASS_H

enum class Class
{
   FIGHTER, // Warrior
   PALADIN, // Warrior
   RANGER,  // Warrior
   THIEF,   // Rogue
   BARD,    // Rogue
   CLERIC,  // Priest
   DRUID,   // Priest
   MAGE,    // Wizard
};

enum class Group
{
   WARRIOR = Class::FIGHTER, // Fighter, Paladin, Ranger
   ROGUE   = Class::THIEF,   // Thief, Bard
   PRIEST  = Class::CLERIC,  // Cleric, Druid
   WIZARD  = Class::MAGE,    // Mage
};

#endif CLASS_H
