#ifndef CHARACTER_H
#define CHARACTER_H

#include "attribute.h"
#include "class.h"

class Character
{
   public:
      Character();
      int attack(int ac) const;

   private:
      Class m_class;
      int m_level;
      int m_thac0; // to-hit-armor-class-0
      int m_ac;    // armor class
      int m_hp;
      Attribute m_attr;
};

#endif //CHARACTER_H
