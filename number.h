#include <vector>

class Number
{
private:
    int value;
    std::vector<Number> Neighbors;

public:
    Number(int v, std::vector<Number> n);
    Number(int v);

    void addNeighbor(Number n);
};
