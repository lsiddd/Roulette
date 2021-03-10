#include <vector>

#include "bet.h"

Bet::Bet(std::vector<int> b) {
  bets = b;

  for (int i = 0; i < 45; i++) {
    int p;
    switch (i) {
    case 0:
      probabilities[i] = 1. / 2;
    case 1:
      probabilities[i] = 1. / 2;
    case 2:
      probabilities[i] = 1. / 2;
    case 3:
      probabilities[i] = 1. / 2;
    case 4:
      probabilities[i] = 1. / 3;
    case 5:
      probabilities[i] = 1. / 3;
    case 6:
      probabilities[i] = 1. / 3;
    case 7:
      probabilities[i] = 1. / 3;
    case 8:
      probabilities[i] = 1. / 3;
    case 9:
      probabilities[i] = 1. / 3;
    default:
      probabilities[i] = 1. / 37;
    }
  }
}

double Bet::evaluate_bet(std::vector<int> bets) {
  double profit = 0;

  // do stuff

  return profit;
}
