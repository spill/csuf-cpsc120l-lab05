// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtinh02
//
// Lab 06-01
// Partners: @gimenar26
//
// Pattern
//

#include <iostream>

const int kCounterMAx{22};
int main(int argc, char const *argv[]) {
  int linespace{0};
  for (linespace = kCounterMAx; linespace >= 1; linespace--) {
    int dash{0};
    for (dash = 21; dash >= linespace; dash--) {
      std::cout << "-";
    }
    std::cout << "*";
    int bar{0};
    for (bar = 1; bar <= linespace; bar++) {
      std::cout << "|";
    }
    std::cout << "\n";
  }
  return 0;
}
