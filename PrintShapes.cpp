#include <iostream>
#include <string>

int main(){
  std::cout << "What shape do you want Triangle(T), Square(S) or Rectangle(R) ?";
  std::string shape;
  std::cin >> shape;

  if (shape == "R"){
    std::cout << std::string(20,'*') << std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << std::string(20,'*') <<std::endl;
  }
  else if (shape == "S"){
    std::cout << std::string(20,'*') << std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << "*" << std::string(18,' ') << "*" <<std::endl;
    std::cout << std::string(20,'*') <<std::endl;
  }
  else if (shape == "T"){
    std::string first =   "\t\t\t\t\t\t\t\t\t*";
    std::string second =  "\t\t\t\t\t\t\t\t*\t*";
    std::string third=    "\t\t\t\t\t\t\t*\t\t*";
    std::string fourth =  "\t\t\t\t\t*\t\t\t\t*";
    std::string fifth =   "\t\t\t*\t\t\t\t\t\t*";
    std::string sixth =   "\t*\t\t\t\t\t\t\t\t*";
    std::string seventh = "*\t\t\t\t\t\t\t\t\t*";
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    std::cout << fourth << std::endl;
    std::cout << fifth << std::endl;
    std::cout << sixth << std::endl;
    std::cout << seventh << std::endl;
    std::cout << sixth << std::endl;
    std::cout << fifth << std::endl;
    std::cout << fourth << std::endl;
    std::cout << third << std::endl;
    std::cout << second<< std::endl;
    std::cout << first << std::endl;
  }
  else{
    std::cout<< "you suck at following directions" << std::endl;
  }

  return(0);
}
