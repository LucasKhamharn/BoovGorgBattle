#include "Boov.h"

Boov::Boov(const std::string &NAME, int HEALTH, int SHIELD)
    : Competitor(NAME, HEALTH, SHIELD)
{
    // leave space blank
}

void Boov::GetsAttacked() 
{
    // 0 - 99
    int roll = rand() % 100;
    if (roll == 0)
    {
        // 0 (1%)
        health = 0;
    }
    else if (roll <= 50)
    {
        // 1 - 50 (50%)
        shield -= (2 + (rand() % 4));
        if (shield < 0)
        {
            health += shield;
            shield = 0;
        }
    }
    else if (roll <= 79)
    {
        // 51 - 79 (29%)
        health -= (4 + (rand() % 5));
    }
    // 20% do nothing...
}
