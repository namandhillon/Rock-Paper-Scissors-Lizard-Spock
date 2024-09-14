/* 
Name: Namanpreet Dhillon
Project: Rock Paper Scissors Lizard Spock (The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));

  int computer = rand() % 5 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors Lizard Spock!\n";
  std::cout << "====================\n\n";

  std::cout << "Here are the rules.\n   1) Scissors cuts Paper.\n   2) Paper covers Rock.\n   3) Rock crushes Lizard.\n   4) Lizard poisons Spock.\n   5) Spock smashes Scissors.\n";
  std:: cout <<"   6) Scissors decapitate Lizard.\n   7) Lizard eats Paper.\n   8) Paper disproves Spock.\n   9) Spock vaporizes Rock.\n  10) Rock crushes Scissors.\n\n";

  std::cout << "When prompted, type your number and click enter.\n\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✂\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n";

  std::cout << "\nShoot!: "; 

  std::cin >> user;

  if (user == 1) {
    std::cout << "\nYou chose ✊.\n";
  }
    else if (user == 2) {
      std::cout << "\nYou chose ✋.\n";
    }
    else if (user == 3) {
      std::cout << "\nYou chose ✂.\n";
    }
    else if (user == 4) {
      std::cout << "\nYou chose 🦎.\n";
    }
    else if (user == 5) {
      std::cout << "\nYou chose 🖖.\n";
    }
  else {
    std::cout << "\nInvalid Input.\n";
  }

  if (computer == 1) {
    std::cout << "The computer chose ✊.\n\n";
  }
    else if (computer == 2) {
      std::cout << "The computer chose ✋.\n\n";
    }
    else if (computer == 3) {
      std::cout << "The computer chose ✂.\n\n";
    }
    else if (computer == 4) {
      std::cout << "The computer chose 🦎.\n\n";
    }
  else {
    std::cout << "The computer chose 🖖.\n\n";
  }

  // Game Time!
  if (user == computer) {
    std::cout << "Tie!\n";
  }
    else if (user == 3 && computer == 2) {
      std::cout << "You win!\n";
    }
    else if (user == 2 && computer == 1) {
      std::cout << "You win!\n";
    }
    else if (user == 1 && computer == 4) {
      std::cout << "You win!\n";
    }
    else if (user == 4 && computer == 5) {
      std::cout << "You win!\n";
    }
    else if (user == 5 && computer == 3) {
      std::cout << "You win!\n";
    }
    else if (user == 3 && computer == 4) {
      std::cout << "You win!\n";
    }
    else if (user == 4 && computer == 2) {
      std::cout << "You win!\n";
    }
    else if (user == 2 && computer == 5) {
      std::cout << "You win!\n";
    }
    else if (user == 5 && computer == 1) {
      std::cout << "You win!\n";
    }
    else if (user == 1 && computer == 3) {
      std::cout << "You win!\n";
    }
  else {
    std::cout << "You lose!\n";
  }
  std::cout << "\nThank you for playing Rock Paper Scissors Lizard\nSpock!\n";

return 0; 
}
