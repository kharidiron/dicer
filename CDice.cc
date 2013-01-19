// /: CDice.cc
// Dice class definitions

#include "CDice.h"

// Construct a CDice object
CDice::CDice() {};

// Destruct a CDice object
CDice::~CDice() { };

// Pick up some dice
void CDice::pickup(int q, int s) {
  quantity = q;
  sides = s;
  results = std::vector<int> (quantity);
};

// Initiate a roll of the dice
int CDice::roll() {
  srand((unsigned)time(0));
  std::cout << "You're rolling " << quantity << "D" << sides << std::endl;

  sum = 0;
  for (int i = 0; i < quantity; i++)
  {
    int roll = (rand()%sides)+1;
    results[i] = roll;
    sum += roll;
  }
  return 0;
};

// /:~
