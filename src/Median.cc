#include <algorithm> //sort
#include <stdexcept> //domain_error
#include <vector> //vector



//compute the median of a vector<double>
//note that calling this funtion copies the entire argument vector
double median(std::vector<double> vec)
{
  typedef std::vector<double>::size_type vec_sz;
  vec_sz size = vec.size();
  if (size == 0)
    throw std::domain_error("median of an empty vector is UNDEF");
  std::sort(vec.begin(), vec.end());

  vec_sz mid = size/2;
  
  if (size%2 == 0)
    return (vec[mid] + vec[mid-1])/2;
  else if (size%2 == 1)
    return vec[mid];
  else
    throw std::domain_error("something went wrong with your vector");
}

