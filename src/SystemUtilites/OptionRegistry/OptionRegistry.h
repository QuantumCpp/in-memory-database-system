#pragma once
#include "../Structs/OptionMetaData.h"

void RegisterOption(const OptionMetaData& option);
const OptionMetaData* FindOption(const std::string& name);
