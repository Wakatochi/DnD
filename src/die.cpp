#include "die.h"

Die::Die()
: m_sides(0)
, m_seed(m_randomDevice())
{
   m_rand = distribution(m_sides);
}

Die::Die(int side)
: m_sides(side)
, m_seed(m_randomDevice())
{
   m_rand = distribution(m_sides);
}

int Die::toss()
{
   return m_rand(m_seed);
}

std::uniform_int_distribution<> Die::distribution(int sides)
{
   return std::uniform_int_distribution<>(1, sides);
}

