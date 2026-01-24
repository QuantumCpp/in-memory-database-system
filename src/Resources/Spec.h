#pragma once
#include "GlobalVariables.h"

enum class ValuePolicy{
  None,
  Required,
  Optional
};

const std::unordered_map<std::string,ValuePolicy> CommandSpec = {
    {"list" , ValuePolicy::None}
  };
const std::unordered_map<std::string,ValuePolicy> OptionSpec = {
    {"--extension", ValuePolicy::Required},
    {"-e" , ValuePolicy::None},
    {"-s" , ValuePolicy::None},
    {"-d" , ValuePolicy::None},

  };
