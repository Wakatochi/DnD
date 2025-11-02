#ifndef PLAYER_H
#define PLAYER_H

#include "character.h"

class Player: public Character
{
   public:
      Player();
      Player(std::string in_name, Class in_class);
};

#endif // PLAYER_H
