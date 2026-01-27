#pragma once
#include  "../GeneralLibraries/GeneralLibraries.h"
#include "../EnumsClass/ValuePolicy.h"
#include "../EnumsClass/ValueType.h"

struct OptionMetaData{
  std::vector<std::string> names;
  std::string description;
  ValuePolicy value_policy;
  ValueType value_type;
  std::string default_name;
  std::vector<std::string> conflicts_with;
  std::vector<std::string> requieres;
};


