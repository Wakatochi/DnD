#ifndef CHARACTER_H
#define CHARACTER_H

#include "attribute.h"
#include "class.h"
#include <string>

class Character
{
   public:
      Character();
      Character(std::string in_name, Class in_class);
      int attack(Character* in_target) const;

      int getAc() const;

      void setLevel(int in_level);

      // Override generated values
      void setThac0(int in_thac0);
      void setAc(int in_ac);
      void setHp(int in_hp);
      void setAttributes(Attribute in_attr);

   private:

   protected:
      std::string m_name;
      Class m_class;
      int m_level;
      int m_thac0; // to-hit-armor-class-0
      int m_ac;    // armor class
      int m_hp;
      Attribute m_attr;
};

#endif //CHARACTER_H
