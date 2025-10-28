#include "test.h"
#include "character.h"
#include "die.h"
#include "die100.h"

#include <cassert>
#include <iostream>
#include <stdio.h>

void tossD20()
{
   Die d20(20);
   std::cout << "--- Toss D20 100 times ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d20.toss();
      assert(value > 0 && value <= 20);

      std::cout << i + 1 << ": " << value << std::endl;
   }

   std::cout << "--- ------------------ ---" << std::endl;
}

void tossD4()
{
   Die d4(4);

   std::cout << "---- Toss D4 100 times ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d4.toss();
      assert(value > 0 && value <= 4);

      std::cout << i + 1 << ": " << value << std::endl;
   }

   std::cout << "--- ------------------ ---" << std::endl;
}

void tossD6()
{
   Die d6(6);

   std::cout << "---- Toss D6 100 times ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d6.toss();
      assert(value > 0 && value <= 6);

      std::cout << i + 1 << ": " << value << std::endl;
   }

   std::cout << "--- ------------------ ---" << std::endl;
}

void tossD8()
{
   Die d8(8);

   std::cout << "---- Toss D8 100 times ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d8.toss();
      assert(value > 0 && value <= 8);

      std::cout << i + 1 << ": " << value << std::endl;
   }

   std::cout << "--- ------------------ ---" << std::endl;
}

void tossD10()
{
   Die d10(10);

   std::cout << "---- Toss D10 100 times ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d10.toss();
      assert(value > 0 && value <= 10);

      std::cout << i + 1 << ": " << value << std::endl;
   }

   std::cout << "--- ------------------ ---" << std::endl;
}

void tossD100()
{
   D100 d100;

   std::cout << "---- Toss D100 100 times (Percentile)---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d100.percentileToss();
      assert(value > 0 && value <= 100);

      std::cout << i + 1 << ": " << value << std::endl;
   }
   std::cout << "--- ------------------ ---" << std::endl;

   std::cout << "---- Toss D100 100 times (Standard)---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      int value = d100.standardToss();
      assert(value > 0 && value <= 100);

      std::cout << i + 1 << ": " << value << std::endl;
   }
   std::cout << "--- ------------------ ---" << std::endl;
}

void characterAttack()
{
   Character chara;

   std::cout << "---- Attack 100 times on AC 8 ---" << std::endl;
   for(int i = 0; i < 100; i++)
   {
      std::cout << i + 1 << ": ";
      chara.attack(8);
   }
   std::cout << "--- ------------------ ---" << std::endl;
}
