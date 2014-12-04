#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::cout << "Please input your list of integers followed by an EOF: " ;
  std::vector<int> Numbers;
  int x;
  while (std::cin >> x){
    Numbers.push_back(x);
  }
  std::cout << "Number of integers read: " << Numbers.size() << std::endl;
  sort(Numbers.begin(),Numbers.end());
  std::vector<int>::size_type quantLen = Numbers.size();
  std::cout << "\n\nFirst Quantile: ";
  for (int i = 3*(quantLen/4); i != quantLen; ++i){
    std::cout <<  Numbers[i] << "  ";
  }
  std::cout << "\n\n" << std::endl;
  std::cout << "Second Quantile: ";
  for (int i = 2*(quantLen/4); i != 3*(quantLen/4); ++i){
    std::cout <<  Numbers[i] << "  ";
  }
  std::cout << "\n\n" << std::endl; 
  std::cout << "Third Quantile: ";
  for (int i = quantLen/4; i != 2*(quantLen/4); ++i){
    std::cout <<  Numbers[i] << "  ";
  }
  std::cout << "\n\n" << std::endl; 
  std::cout << "Final Quantile: ";
  for (int i = 0; i != quantLen/4; ++i){
    std::cout <<  Numbers[i] << "  ";
  }
  std::cout << "\n\n" << std::endl; 
  return(0); 
}
