// /: CDice.h
// Dice class declarations

#ifndef _CDICE_H_
#define _CDICE_H_

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

class CDice {
    int quantity;
    int sides;
  public:
    std::vector<int> results;
    int sum;

  public:
    CDice();
    ~CDice();
    void pickup(int q, int s);
    int roll();
};

#endif //_CDICE_H_

// /:~
