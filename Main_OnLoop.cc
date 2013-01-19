#include "Main.h"

void CMain::OnLoop() {
  std::cout << "How many sides on the dice? : ";
  int sides;
  std::cin >> sides;
  std::cout << "How many dice? : ";
  int quantity;
  std::cin >> quantity;

  Dice.pickup(quantity, sides);
  Dice.roll();

  for (int i = 0; i < Dice.results.size(); i++)
  {
    if (i == 0) std::cout<< "You rolled:\n  ";
    std::cout << Dice.results[i];
    if (i != Dice.results.size()-1) std::cout << ", ";
  }
  std::cout << std::endl;
  std::cout << "The values summed to: " << Dice.sum << std::endl;

  std::cout << "Would you like to roll again: (y)es or (n)o" << std::endl;
  char choice;
  std::cin >> choice;
  switch(choice) {
    case 'n' : std::cout << "quitting" << std::endl;
                Running = false;
                break;
    case 'y' : break;
    default : std::cout << "Please type either 'y' for yes or 'n' for no." << std::endl;
  }

}