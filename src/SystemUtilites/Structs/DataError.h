#pragma once
#include "../EnumsClass/ValidationError.h"
#include "../GeneralLibraries/GeneralLibraries.h"

struct DataError{
  ValidationError Error;
  std::string SpecificError;
};
