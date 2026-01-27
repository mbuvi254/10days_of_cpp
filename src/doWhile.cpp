/*
The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax
do {
  // code block to be executed
}
while (condition);

Do not forget to increase the variable used in the condition, otherwise the loop will never end!



*/

#include <iostream>

int main() {
  int i = 0;
  do {
    std::cout << i << "\n";
    i++;
  }
  while (i < 10);
  return 0;
}

