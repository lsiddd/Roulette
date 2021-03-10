#pragma once
#include <vector>
#include <stdint.h>
#include <string>

class Number
{
private:
    int value;
    std::vector<Number> neighbors;
    bool parity;
    uint8_t column;
    uint8_t dozen;
    int color;

    int colors[37] = {2, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0,
                      0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0};

public:
    Number(int v);

    bool get_parity() const;
    uint8_t get_column() const;
    uint8_t get_dozen() const;
    int get_color() const;
    int get_value() const;

    friend std::ostream &operator<<(std::ostream &os, const Number &c);
};
