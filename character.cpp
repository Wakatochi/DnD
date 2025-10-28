#include "character.h"
#include "die.h"

#include <iostream>
#include <stdio.h>

Character::Character()
: m_class(Class::FIGHTER)
, m_level(1)
, m_thac0(20)
, m_ac(10)
, m_hp(12)
, m_attr()
{
   m_attr.strength     = 18;
   m_attr.dexterity    = 10;
   m_attr.constitution = 16;
   m_attr.intelligence = 10;
   m_attr.wisdom       = 10;
   m_attr.charisma     = 13;
}

int Character::attack(int ac) const
{
   Die d20(20);
   StrengthLookup lookup;
   
   int dice = d20.toss();
   int modifier = lookup.strenghtMatrix[m_attr.strength - 1][(int)StrengthLookup::Strength::HIT];

   int hit = dice + modifier;

   std::cout << dice << "+" << modifier << "=" << hit;
   if(dice == 20)
   {
      std::cout << " CRIT" << std::endl;
   }
   else if(dice == 1)
   {
      std::cout << " MISS" << std::endl;
   }
   else if(hit < m_thac0 - ac)
   {
      std::cout << " MISS (" << hit << " < THAC0:" << m_thac0 << "-AC:" << ac << ")" << std::endl;
   }
   else
   {
      std::cout << " HIT (" << hit << " >= THAC0:" << m_thac0 << "-AC:" << ac << ")" << std::endl;
   }
   
   return hit;
}
