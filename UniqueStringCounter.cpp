#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
  std::cout << "Please write your list of strings followed by a (CTRL+D): ";
  std::vector<std::string> Words;
  std::string x;
  while (std::cin >> x){
   Words.push_back(x);
  }
  sort(Words.begin(),Words.end());
  int wordcount = 1;
  std::cout << "\n"<< std::endl;
  for (std::vector<std::string>::size_type i = 0; i != Words.size(); ++i){
//    std::cout << Words[i]<< std::endl;
    if (i == Words.size() -1){
      return(0);
    }
    else if (Words[i] == Words[i+1]){
      ++wordcount;
    }
    else {
      std::cout << "I saw " << wordcount << " copies of the word \"" << Words[i] << "\"" << std::endl;
      wordcount = 1;
    }
  }
  return(0);
}

