#pragma once
#include "../../../SystemUtilites/GeneralLibraries/GeneralLibraries.h"
#include "../../../SystemUtilites/Structs/DataError.h"

void RegisterError(const DataErrorDetail& error);
const DataErrorDetail* GetError(const ValidationError& Id);
