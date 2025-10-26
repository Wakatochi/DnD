#ifndef D20_H
#define D20_H

#include "die.h"

class D20: public Die
{
   public:
      D20();
      int toss();

   private:
      int m_sides;

};

#endif // D20_H
