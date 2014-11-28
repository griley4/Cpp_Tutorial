//ask for a person's name, and greet them

#include <iostream>
#include <string>

int main(){
  //ask for the person's name
  std::cout << "Please enter your first name: " ;
  //read the name
  std::string name; //define name
  std::cin >> name; //save cin to variable name
  //greet
  std::cout << "Hello, " << name << "!" << std::endl;
  return(0);
}
