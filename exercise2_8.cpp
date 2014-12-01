#include <iostream>
int main(){
  int i = 2;
  int product = 1;
  while (i<10){
    product = product * i;
    std::cout << product << std::endl;
    ++i;
  }
}

