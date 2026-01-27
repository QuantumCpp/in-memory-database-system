#pragma once
#include "../EnumsClass/ValidationError.h"
#include "../GeneralLibraries/GeneralLibraries.h"

struct GroupDataValidation{
  ValidationError Error;
  std::string SpecificError;
};
