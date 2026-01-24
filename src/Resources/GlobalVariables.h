#pragma once

#include <cwchar>
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <filesystem> 


enum class ValidationError{
  AllCorrect,
  CommandIncorrectPosition,
  CommandNotFound,
  OptionNotFound,
  OptionRequiredValue,
  OptionNotRequiredValue
} ;


