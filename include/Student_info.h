#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

//student info .h file

#include <iostream>
#include <string>
#include <vector>

//Data Structures
struct Student_info{
  std::string name;
  double midterm, final;
  std::vector<double> homework;
};  // <---- note the semicolon, it's required


bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif
