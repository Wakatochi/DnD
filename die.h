#ifndef DIE_H
#define DIE_H

#include <random>

class Die
{
   public:
      Die();
      Die(int side);
      int toss();

   private:
      int m_sides;
      std::mt19937 m_seed;
      std::random_device m_randomDevice;
      std::uniform_int_distribution<> m_rand;

      std::uniform_int_distribution<> distribution(int sides);
      
};

#endif // DIE_H
