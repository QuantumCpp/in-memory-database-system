#pragma once
#include "../GeneralLibraries/GeneralLibraries.h"
#include "OptionMetaData.h"
#include "../EnumsClass/ValuePolicy.h"
#include <unordered_map>

struct CommandMetaData{
  std::string name;
  std::string description;
  std::vector<std::string> usage_example;
  std::unordered_map<std::string,const OptionMetaData* > options;
  ValuePolicy value_policy;
};
