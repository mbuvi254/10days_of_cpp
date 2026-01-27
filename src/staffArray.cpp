#include <iostream>
#include <string>

using namespace std;

int main(){
  string staff[]={"Daniel","Enoch","Sharon","Martha","Mercy","Marion"};
  for(string person : staff){
    std::cout << person << std::endl;
  };
  return 0;
}