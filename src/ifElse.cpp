#include <iostream>
#include <string>
#include <ctime>
/*
Use the else statement to specify a block of code to be executed if the condition is false.
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}

if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}

*/

int main(){
int time = 20;
if (time < 22) {
  std::cout << "Good day."<<std::endl;
} else if(time <20){
 std::cout << "Good day" << std::endl;
} else {
  std::cout << "Good evening." <<std::endl;
}
    return 0;
}