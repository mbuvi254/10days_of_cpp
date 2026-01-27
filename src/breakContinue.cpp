#include <iostream>
/*
The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop.

This example skips the value of 4:

with while loop
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break;
    }
  } 
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    if (i == 4) {
      i++;
      continue;
    }
    cout << i << "\n";
    i++;
  } 
  return 0;
}


*/

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    std::cout << i << "\n";
  }   
  return 0;
}

