#include <iostream>
#include <stdint.h>
int main(){
  uint64_t number1;
  uint64_t number2;
  std::cout << "please enter the first nubmer: " ;
  std::cin >> number1;
  std::cout << "please enter the second number: " ;
  std::cin >> number2;
  if (number1>number2){std::cout<< number1 <<" is bigger than " <<number2<<std::endl;}
  else if (number2>number1){std::cout<< number2 <<" is bigger than " <<number1<<std::endl;}
  else if (number2==number1){std::cout<< "don't worry, you guys are the same size. move on with your \"lives\"" << std::endl;}
  else {std::cout<<"you are bad at following directions"<<std::endl;}
return(0);

}
 
