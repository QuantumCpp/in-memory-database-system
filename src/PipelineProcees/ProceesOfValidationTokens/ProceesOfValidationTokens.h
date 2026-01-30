#pragma once
#include "../../SystemUtilites/GeneralLibraries/GeneralLibraries.h"
#include "../../SystemUtilites/Structs/Token.h"
#include "../../SystemUtilites/Structs/TokenGroup.h"
#include "../../SystemUtilites/CommandRegister/CommandRegister.h"
#include "../../SystemUtilites/OptionRegistry/OptionRegistry.h"
#include "../../SystemUtilites/EnumsClass/ValidationError.h"
#include "../../Utils/IsValidatedDate/IsValidatedDate.h"

ValidationError ValidationDataToken(const std::vector<Token>& tokens, TokenGroup& TokenGroupRaw);
