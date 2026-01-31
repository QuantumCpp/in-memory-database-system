#include "MessageError.h"

void RegisterAllError() {

    // ================= Input / Syntax =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::EmptyInput;
        err.NameError = "EmptyArguments";
        err.ShortDetail = "No se introdujo ningun elemento";
        //err.handler = PrintEmptyInputError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidSyntax;
        err.NameError = "InvalidSyntax";
        err.ShortDetail = "La sintaxis de entrada es invalida";
        //err.handler = PrintInvalidSyntaxError;
        RegisterError(err);
    }

    // ================= Command =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::NoCommand;
        err.NameError = "NoCommand";
        err.ShortDetail = "No se encontro ningun comando";
        //err.handler = PrintNoCommandError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::MultipleCommands;
        err.NameError = "MultipleCommands";
        err.ShortDetail = "Se detectaron multiples comandos";
        //err.handler = PrintMultipleCommandsError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::CommandNotFound;
        err.NameError = "CommandNotFound";
        err.ShortDetail = "El comando no existe";
        //err.handler = PrintCommandNotFoundError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::CommandIncorrectPosition;
        err.NameError = "CommandIncorrectPosition";
        err.ShortDetail = "El comando no esta en la posicion correcta";
        //err.handler = PrintCommandIncorrectPositionError;
        RegisterError(err);
    }

    // ================= Option =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::OptionNotFound;
        err.NameError = "OptionNotFound";
        err.ShortDetail = "La opcion no existe";
        //err.handler = PrintOptionNotFoundError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::OptionForWrongCommand;
        err.NameError = "OptionForWrongCommand";
        err.ShortDetail = "La opcion no pertenece a este comando";
        //err.handler = PrintOptionForWrongCommandError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::DuplicateOption;
        err.NameError = "DuplicateOption";
        err.ShortDetail = "La opcion fue especificada multiples veces";
        //err.handler = PrintDuplicateOptionError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::OptionRequiresValue;
        err.NameError = "OptionRequiresValue";
        err.ShortDetail = "La opcion requiere un valor";
        //err.handler = PrintOptionRequiresValueError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::OptionDoesNotAcceptValue;
        err.NameError = "OptionDoesNotAcceptValue";
        err.ShortDetail = "La opcion no acepta valores";
        //err.handler = PrintOptionDoesNotAcceptValueError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::ValueNotProvided;
        err.NameError = "ValueNotProvided";
        err.ShortDetail = "No se proporciono un valor valido";
        //err.handler = PrintValueNotProvidedError;
        RegisterError(err);
    }

    // ================= Type Validation =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidValueType_Integer;
        err.NameError = "InvalidInteger";
        err.ShortDetail = "Se esperaba un entero valido";
        //err.handler = PrintInvalidIntegerError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidValueType_Float;
        err.NameError = "InvalidFloat";
        err.ShortDetail = "Se esperaba un flotante valido";
        //err.handler = PrintInvalidFloatError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidValueType_Path;
        err.NameError = "InvalidPath";
        err.ShortDetail = "La ruta proporcionada es invalida";
        //err.handler = PrintInvalidPathError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidValueType_Date;
        err.NameError = "InvalidDate";
        err.ShortDetail = "El formato de fecha es invalido";
       // err.handler = PrintInvalidDateError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::ValueOutOfRange;
        err.NameError = "ValueOutOfRange";
        err.ShortDetail = "El valor esta fuera del rango permitido";
        //err.handler = PrintValueOutOfRangeError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::InvalidChoice;
        err.NameError = "InvalidChoice";
        err.ShortDetail = "El valor no es una opcion valida";
        //err.handler = PrintInvalidChoiceError;
        RegisterError(err);
    }

    // ================= Conflict =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::ConflictingOptions;
        err.NameError = "ConflictingOptions";
        err.ShortDetail = "Opciones mutuamente excluyentes";
        //err.handler = PrintConflictingOptionsError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::ConflictingValues;
        err.NameError = "ConflictingValues";
        err.ShortDetail = "Los valores entran en conflicto";
        //err.handler = PrintConflictingValuesError;
        RegisterError(err);
    }

    // ================= Dependency =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::MissingRequiredOption;
        err.NameError = "MissingRequiredOption";
        err.ShortDetail = "Falta una opcion requerida";
        //err.handler = PrintMissingRequiredOptionError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::MissingRequiredPositional;
        err.NameError = "MissingRequiredPositional";
        err.ShortDetail = "Falta un argumento posicional requerido";
        //err.handler = PrintMissingRequiredPositionalError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::TooManyPositionals;
        err.NameError = "TooManyPositionals";
        err.ShortDetail = "Demasiados argumentos posicionales";
        //err.handler = PrintTooManyPositionalsError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::TooFewPositionals;
        err.NameError = "TooFewPositionals";
        err.ShortDetail = "Faltan argumentos posicionales";
        //err.handler = PrintTooFewPositionalsError;
        RegisterError(err);
    }

    // ================= Filesystem =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::PathDoesNotExist;
        err.NameError = "PathDoesNotExist";
        err.ShortDetail = "La ruta no existe";
        //err.handler = PrintPathDoesNotExistError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::PathNotDirectory;
        err.NameError = "PathNotDirectory";
        err.ShortDetail = "La ruta no es un directorio";
        //err.handler = PrintPathNotDirectoryError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::PathNotFile;
        err.NameError = "PathNotFile";
        err.ShortDetail = "La ruta no es un archivo";
        //err.handler = PrintPathNotFileError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::PathNotReadable;
        err.NameError = "PathNotReadable";
        err.ShortDetail = "No hay permisos de lectura";
        //err.handler = PrintPathNotReadableError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::PathNotWritable;
        err.NameError = "PathNotWritable";
        err.ShortDetail = "No hay permisos de escritura";
        //err.handler = PrintPathNotWritableError;
        RegisterError(err);
    }

    // ================= Misc =================
    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::MultipleSeparators;
        err.NameError = "MultipleSeparators";
        err.ShortDetail = "Se detectaron multiples separadores '--'";
        //err.handler = PrintMultipleSeparatorsError;
        RegisterError(err);
    }

    {
        DataErrorDetail err;
        err.ErrorID = ValidationError::UnknownError;
        err.NameError = "UnknownError";
        err.ShortDetail = "Error desconocido";
        //err.handler = PrintUnknownError;
        RegisterError(err);
    }
}

