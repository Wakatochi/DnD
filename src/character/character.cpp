#include "character.h"
#include "die.h"

#include <iostream>
#include <stdio.h>

Character::Character()
: m_name("Default")
, m_class(Class::FIGHTER)
, m_level(1)
, m_thac0(20)
, m_ac(10)
, m_hp(12)
, m_attr({18, 10, 16, 10, 10, 13})
{

}

Character::Character(std::string in_name, Class in_class)
: m_name(in_name)
, m_class(in_class)
, m_level(1)
, m_thac0(20)
, m_ac(10)
, m_hp(12)
, m_attr({18, 10, 16, 10, 10, 13})
{
    
}

void Character::attack(Character* in_target) const
{
   Die d20(20);
   StrengthLookup lookup;
   Hit hitOut = Hit::MISS;

   int dice = d20.toss();
   int modifier = lookup.strenghtMatrix[m_attr.strength - 1][(int)StrengthLookup::Strength::HIT];
   int hit = dice + modifier;
   int ac = in_target->getAc();

   std::cout << dice << "+" << modifier << "=" << hit;
   if(dice == 20)
   {
      std::cout << " CRIT HIT!" << std::endl;
      hitOut = Hit::CRIT;
   }
   else if(dice == 1)
   {
      std::cout << " CRIT MISS!" << std::endl;
      hitOut = Hit::MISS;
   }
   else if(hit < m_thac0 - ac)
   {
      std::cout << " MISS (" << hit << " < THAC0:" << m_thac0 << "-AC:" << ac << ")" << std::endl;
      hitOut = Hit::MISS;
   }
   else
   {
      std::cout << " HIT (" << hit << " >= THAC0:" << m_thac0 << "-AC:" << ac << ")" << std::endl;
      hitOut = Hit::HIT;
   }

   int dmg = calculateDamage(hitOut, in_target);
   bool dead = in_target->setDamage(dmg);
}

int Character::calculateDamage(Hit in_hit, Character* in_target) const
{
   return 0;
}

int Character::getAc() const
{
   return m_ac;
}

int Character::getHp() const
{
   return m_hp;
}

bool Character::setDamage(int dmg)
{
   bool dead = false;

   m_hp = m_hp - dmg;

   if(m_hp <= 0)
   {
      dead = true;
   }

   return dead;
}

void Character::setLevel(int in_level)
{
   m_level = in_level;
}

void Character::setThac0(int in_thac0)
{
   m_thac0 = in_thac0;
}

void Character::setAc(int in_ac)
{
   m_ac = in_ac;
}

void Character::setHp(int in_hp)
{
   m_hp = in_hp;
}

void Character::setAttributes(Attribute in_attr)
{
   m_attr = in_attr;
}
