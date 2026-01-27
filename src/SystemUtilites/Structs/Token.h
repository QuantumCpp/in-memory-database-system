#pragma once
#include "../EnumsClass/TypeToken.h"
#include "../GeneralLibraries/GeneralLibraries.h"

struct Token{
  TypeToken type;
  std::string name;
  std::string value; //solo si es una OptionWithValue
};
