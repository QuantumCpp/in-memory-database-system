#pragma once

#include <cwchar>
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <filesystem> 
#include "EnumsGlobal.h"

const std::unordered_map<std::string,ValuePolicy> CommandSpec = {
    {"list" , ValuePolicy::None}
  };
const std::unordered_map<std::string,ValuePolicy> OptionSpec = {
    {"--extension", ValuePolicy::Required},
    {"-e" , ValuePolicy::None},
    {"-s" , ValuePolicy::None},
    {"-d" , ValuePolicy::None},

  };

struct Token{
  TypeToken type;
  std::string name;
  std::string value; //solo si es una OptionWithValue
};



