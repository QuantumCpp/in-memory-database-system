#pragma once
#include "GlobalVariables.h"

enum class TypeToken{
  Command,
  Option,
  Separation,
  Positional
};

struct Token{
  TypeToken type;
  std::string name;
  std::string value; //solo si es una OptionWithValue
};


