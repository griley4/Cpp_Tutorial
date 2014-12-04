//read homework grades from an input stream into a vector<double>
#include "Student_info.h"

std::istream& read_hw(std::istream& in, std::vector<double>& hw)
{
  if (in) {
    hw.clear();

    //read new HW grades
    double x;
    while (in >> x)
      hw.push_back(x);

    //clear the stream for next set of input
    in.clear();
  }
  return in;
}

std::istream& read(std::istream& is, Student_info& s)
{
  //read and store the student's name and final exam grades

  is >> s.name >> s.midterm >> s.final;

  read_hw(is, s.homework); //read all the homework grades
  return is;
}

bool compare(const Student_info& x, const Student_info& y)
{
  return x.name < y.name;
}
