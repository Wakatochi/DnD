#include "die100.h"

D100::D100()
: m_tens(10)
, m_ones(10)
{

}

int D100::standardToss()
{
   int tens = m_tens.toss();
   int ones = m_ones.toss();

   if(tens == 10 && ones == 10)
   {
      ones = 0;
   }
   else if(tens == 1 && ones == 10)
   {
      tens = 0;
   }
   else if(tens == 10 && ones < 10)
   {
      tens = 0;
   }

   tens = tens * 10;

   int result = tens + ones;
   return result;
}

int D100::percentileToss()
{
   int tens = (m_tens.toss() - 1) * 10;
   int ones = (m_ones.toss() - 1);

   if(tens == 0 && ones == 0)
   {
      tens = 100;
      ones = 0;
   }

   int result = tens + ones;
   return result;
}
