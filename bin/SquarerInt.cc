#include <iostream>
#include <iomanip>
#include <string>


unsigned int int_to_str(int x){
  unsigned int len = 0;
  if (x >0){
    for (len = 0; x>0; ++len){
      x = x/10;
    }
  }
  return(len);
}

int main(){
  int startval = 1;
  int finish = 100;
  int sqfin = finish * finish;
  unsigned int sqfinlen = int_to_str(sqfin);
  unsigned int finlen = int_to_str(finish);

  for (; startval != finish + 1; ++startval){
    std::cout << std::setw(finlen)<< startval << std::setw(sqfinlen + 2) << startval*startval << std::endl;
  }
}
