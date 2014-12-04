//frame the output of HelloYou

#include <iostream>
#include <string>

int main(){
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;
  
  //build the message to write
  const std::string greeting = "Hello, " + name + "!";

  //build the second and fourth lines of output
  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";

  //build the first and fifth lines
  const std::string first (second.size(), '*');

  //write it all out
  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *"  << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;
  
  return(0);
}
