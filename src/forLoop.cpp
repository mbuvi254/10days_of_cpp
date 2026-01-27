#include <iostream>
/*
The for loop is a more compact way of writing a while loop. It is frequently used to execute a specific number of times.

Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
Statement 1 is executed before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed each time after the code block has been executed.
*/


int main() {
  for (int i = 0; i < 5; i++) {
    std::cout << i << "\n";
  }
  return 0;
}
