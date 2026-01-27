#include <iostream>
/*
The while loop loops through a block of code as long as a specified condition is true:

Syntax
while (condition) {
  // code block to be executed
}
*/


int main() {
  int i = 0;
  while (i < 5) {
    std::cout << i << "\n";
    i++;
  }
  return 0;
}
