#include "number.h"
#include <iostream>

Number::Number(int v)
{
    value = v;
    color = colors[v];

    parity = value % 2 == 0;

    if (value == 0)
    {
        column = 0;
        dozen = 0;
    }
    else if (value % 3 == 1)
    {
        column = 1;
    }
    else if (value % 3 == 2)
    {
        column = 2;
    }
    else if (value % 3 == 0)
    {
        column = 3;
    }

    else if (value < 13)
    {
        dozen = 1;
    }
    else if (value < 25)
    {
        dozen = 2;
    }
    else
    {
        dozen = 3;
    }
}


bool Number::get_parity() const
{
    return parity;
}
uint8_t Number::get_column() const
{
    return column;
}

uint8_t Number::get_dozen() const
{
    return dozen;
}

int Number::get_color() const
{
    return color;
}

int Number::get_value() const
{
    return value;
}

std::ostream &operator<<(std::ostream &os, const Number &n)
{

    os << "Number " << n.get_value() << " = {" << n.get_color() << ", " <<
     (int) n.get_column() << ", " << (int) n.get_dozen() << ", " << 
     n.get_parity() << "}";
    return os;
}
