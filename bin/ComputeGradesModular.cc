#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "Grade.h"
#include "Student_info.h"

int main(){
  std::vector <Student_info> students;
  Student_info record;
  std::string::size_type maxlen = 0;

  //read and store all records and find the longest name
  while (read(std::cin, record)) {
    maxlen = std::max(maxlen, record.name.size());
    students.push_back(record);
  }

  //alphebetize
  std::sort(students.begin(), students.end(), compare);
  //write names and grades
  for (std::vector<Student_info>::size_type i = 0;i !=students.size(); ++i){

    //write the name, padded on the right to align the grades
    std::cout << students[i].name << std::string (maxlen + 1 -students[i].name.size(), ' ');

    //compute and write the grade

    try {

      double final_grade = grade(students[i]);
      std::streamsize prec = std::cout.precision();
      std::cout << std::setprecision(3) << final_grade << std::setprecision(prec);
    } catch (std::domain_error e){
      std::cout << e.what();
    }
    std::cout << std::endl;
  }
  return(0);
}
