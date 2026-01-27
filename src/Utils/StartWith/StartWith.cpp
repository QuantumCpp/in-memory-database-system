#include "StartWith.h"

bool StartWith(const std::string& arg, const std::string& start){
  return !arg.empty() && arg.find(start) == 0;
}
