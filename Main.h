// /: CDice.h
// Dice class declarations

#ifndef _MAIN_H_
#define _MAIN_H_

#include "CDice.h"

#include <iostream>

class CMain {
    bool Running;

  private:
    CDice Dice;
  public:
    CMain();

  public:
    bool OnInit();
    void OnLoop();
    int OnExecute();
};

#endif // _MAIN_H_
// /:~