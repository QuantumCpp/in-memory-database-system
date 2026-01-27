#pragma once
#include "../Structs/CommandMetaData.h"
#include <string>

void CommandRegister(const CommandMetaData& command);
const CommandMetaData* FindCommand(const std::string& name);
