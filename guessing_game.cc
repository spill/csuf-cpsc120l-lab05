// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtinh02
//
// Lab 05-01
// Partners: @gimenar27
//
// guessing_game
//

#include <cmath>
#include <iostream>
#include <string>

const int kSecretNumber = 42;
int main(int argc, char const *argv[]) {
  int guess = 0;
  int last_guess = 0;
  std::string answer;
  std::cout << "Hi - I'm a computer and I've thought of a number between "
               "1 and 100.\n";
  std::cout << "Let's play a guessing game...\n";
  bool game_is_over{false};
  do {
    std::cout << " Guess the secret number: ";
    std::cin >> guess;
    if (guess == kSecretNumber) {
      std::cout << "Congrats! The secret number was " << kSecretNumber
                << ". Your number matched."
                << "\n";

      std::cout << "Do you want to play [y/n]?: ";
      std::cin >> answer;
      if (answer == "y") {
        game_is_over = false;
      } else if (answer == "n") {
        break;
      } else {
        std::cout << "You did not choose y or n, please try again";
      }
    } else if (guess < 1 || guess > 100) {
      std::cout << "Try again. Out of bounds";
    } else if (std::abs(kSecretNumber - guess) <
               std::abs(kSecretNumber - last_guess)) {
      std::cout << "You are getting warmer.";
    } else {
      std::cout << "You are getting colder.";
    }
    last_guess = guess;
  } while (!game_is_over);
  return 0;
}
