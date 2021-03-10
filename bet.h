#pragma once

#include <vector>

class Bet {
private:
    std::vector<int> bets;
    std::vector<double> probabilities;

public:
    Bet(std::vector<int> b);
    double evaluate_bet(std::vector<int> bets);

};
