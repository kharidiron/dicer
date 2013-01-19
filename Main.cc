// /: Main.cc
// A dice rolling program

#include "Main.h"

CMain::CMain() {
  Running = true;
}

int CMain::OnExecute() {
  if(OnInit() == false) {
    return -1;
  }

  while(Running) {
    OnLoop();
  }

  std::cout << "Good-bye." << std::endl;
  return 0;
}

int main(int argc, char* argv[]) {
  CMain theApp;

  return theApp.OnExecute();
}

// /:~