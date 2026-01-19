#include <iostream>
#include <string>

/*
C++ Switch Statements
Use the switch statement to select one of many code blocks to be executed.

syntax
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

This is how it works:

The switch expression is evaluated once
The value of the expression is compared with the values of each case
If there is a match, the associated block of code is executed
The break and default keywords are optional, and will be described later in this chapter

When C++ reaches a break keyword, it breaks out of the switch block.

This will stop the execution of more code and case testing inside the block.

When a match is found, and the job is done, it's time for a break. There is no need for more testing.

A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

The default keyword specifies some code to run if there is no case match:


*/


int main() {
  int day = 8;
  switch (day) {
  case 1:
    std::cout << "Monday" << std::endl;
    break;
  case 2:
    std::cout << "Tuesday" << std::endl;
    break;
  case 3:
    std::cout << "Wednesday" << std::endl;
    break;
  case 4:
    std::cout << "Thursday" << std::endl;
    break;
  case 5:
    std::cout << "Friday" << std::endl;
    break;
  case 6:
    std::cout << "Saturday" << std::endl;
    break;
  case 7:
    std::cout << "Sunday" << std::endl;
    break;
  default:
    std::cout << "Looking forward to the Weekend" << std::endl;
  }
  return 0;
}
