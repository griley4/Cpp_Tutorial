
//frame the output of HelloYou

#include <iostream>
#include <string>

int main(){
  std::cout << "Please enter your first name: ";
  std::string name;
  std::cin >> name;
  std::cout << "Please enter the size of your ego as an Int(): ";
  unsigned int pad;
  std::cin >> pad;

  //build the message to write
  const std::string greeting = "Hello, " + name + "!";
  
  //the nubmer of blanks surrounding the greeting
//  const int pad = 0;
  //total number of rows and columns to write
  const unsigned int rows = pad *2 +3;
  const std::string::size_type cols = greeting.size() + pad * 2 + 2;
  //separate the input from the output
  std::cout << std::endl;
    //invariant: we have written r rows so far
    for (unsigned int r = 0; r != rows; ++r){
      std::string::size_type c = 0;
      //invariant we have written c characters in the current row
      while (c != cols){
        //is it time to write the greeting
        if (r == pad + 1 && c == pad + 1){
          std::cout << greeting;
          c += greeting.size();
        }
        else{
          //are we in the border
          if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
            std::cout << "*";
          else
            std::cout << " ";
          ++c;
        }
      }
      std::cout << std::endl;
    }
    return(0);
}

