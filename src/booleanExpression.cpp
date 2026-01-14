#include <iostream>
#include <string>
// Booleans are the basis for all C++ comparisons and conditions.



int x =19;
int y =25;

int userAge =25;
int votingAge =18;

int main(){
std::cout << (x>y) << std::endl;
std::cout << (y>x) << std::endl;
std::cout << (x==y) << std::endl;
std::cout << (userAge>=votingAge) << std::endl;

if(userAge>=votingAge){
    std::cout << "User is old enough to vote" << std::endl;    
} else {
 std::cout << "User is not old enough to vote" << std::endl;   
}
return 0;
}