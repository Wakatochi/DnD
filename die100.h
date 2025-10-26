#ifndef DIE100_H
#define DIE100_H

#include "die.h"

class D100
{
   public:
      D100();
      int standardToss();
      int percentileToss();

   private:
      Die m_tens;
      Die m_ones;
};

#endif // DIE100_H
