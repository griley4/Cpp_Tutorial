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
  std::string longest = Words[0];
  std::string::size_type Lenlongest = Words[0].size();
  std::string shortest = Words[0];
  std::string::size_type Lenshortest = Words[0].size();
  for (std::vector<std::string>::size_type i = 0; i != Words.size(); ++i){
//    std::cout << Words[i]<< std::endl;
    if (Words[i].size() > Lenlongest){
      Lenlongest = Words[i].size();
      longest = Words[i];
    }
    if (Words[i].size() < Lenshortest){
      Lenshortest = Words[i].size();
      shortest = Words[i];
    }
    if (i == Words.size() - 1){
      continue;
    }
    else if (Words[i] == Words[i+1]){
      ++wordcount;
    }
    else {
      std::cout << "I saw " << wordcount << " copies of the word \"" << Words[i] << "\"" << std::endl;
      wordcount = 1;
    }

  }
  std::cout << "\nThe longest word was \"" << longest << "\" Weighing in at " << Lenlongest << " letter(s) long" << std::endl;
  std::cout << "\nThe shortest word was \"" << shortest << "\" Weighing in at " << Lenshortest << " letter(s) long\n" << std::endl;
  return(0);
}

