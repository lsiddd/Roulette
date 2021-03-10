#include "roulette.h"
#include <iostream>

Roulette::Roulette()
{


    for (int i = 0; i < 37; i++)
    {
        Number n(i);
        Numbers.push_back(n);
    }
}
