#pragma once  
#include "../../SystemUtilites/GeneralLibraries/GeneralLibraries.h"
#include "../../SystemUtilites/Structs/DataError.h"
#include "../../SystemUtilites/EnumsClass/ValidationError.h"
#include "RegisterError/RegisterError.h"

// Input / Syntax
#include "Errors/InputSyntax/EmptyInput/EmptyInput.h"
#include "Errors/InputSyntax/InvalidSyntax/InvalidSyntax.h"

// Command
#include "Errors/Command/NoCommand/NoCommand.h"
#include "Errors/Command/MultipleCommands/MultipleCommands.h"
#include "Errors/Command/CommandNotFound/CommandNotFound.h"
#include "Errors/Command/CommandIncorrectPosition/CommandIncorrectPosition.h"

// Option
#include "Errors/Option/OptionNotFound/OptionNotFound.h"
#include "Errors/Option/OptionForWrongCommand/OptionForWrongCommand.h"
#include "Errors/Option/DuplicateOption/DuplicateOption.h"
#include "Errors/Option/OptionRequiresValue/OptionRequiresValue.h"
#include "Errors/Option/OptionDoesNotAcceptValue/OptionDoesNotAcceptValue.h"
#include "Errors/Option/ValueNotProvided/ValueNotProvided.h"

// Type Validation
#include "Errors/TypeValidation/InvalidValueType_Integer/InvalidValueType_Integer.h"
#include "Errors/TypeValidation/InvalidValueType_Float/InvalidValueType_Float.h"
#include "Errors/TypeValidation/InvalidValueType_Path/InvalidValueType_Path.h"
#include "Errors/TypeValidation/InvalidValueType_Date/InvalidValueType_Date.h"
#include "Errors/TypeValidation/ValueOutOfRange/ValueOutOfRange.h"
#include "Errors/TypeValidation/InvalidChoice/InvalidChoice.h"

// Conflict
#include "Errors/Conflict/ConflictingOptions/ConflictingOptions.h"
#include "Errors/Conflict/ConflictingValues/ConflictingValues.h"

// Dependency
#include "Errors/Dependency/MissingRequiredOption/MissingRequiredOption.h"
#include "Errors/Dependency/MissingRequiredPositional/MissingRequiredPositional.h"
#include "Errors/Dependency/TooManyPositionals/TooManyPositionals.h"
#include "Errors/Dependency/TooFewPositionals/TooFewPositionals.h"

// Filesystem
#include "Errors/Filesystem/PathDoesNotExist/PathDoesNotExist.h"
#include "Errors/Filesystem/PathNotDirectory/PathNotDirectory.h"
#include "Errors/Filesystem/PathNotFile/PathNotFile.h"
#include "Errors/Filesystem/PathNotReadable/PathNotReadable.h"
#include "Errors/Filesystem/PathNotWritable/PathNotWritable.h"

// Misc
#include "Errors/Misc/MultipleSeparators/MultipleSeparators.h"
#include "Errors/Misc/UnknownError/UnknownError.h"



void RegisterAllError();
