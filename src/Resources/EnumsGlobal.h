#pragma once

enum class ValuePolicy{
  None,
  Required,
  Optional
};


enum class ValidationError{
  AllCorrect,
  CommandIncorrectPosition,
  CommandNotFound,
  OptionNotFound,
  OptionRequiredValue,
  OptionNotRequiredValue,
  MoreOfCommand,
  MoreSeparationSignal
} ;

enum class TypeToken{
  Command,
  Option,
  Separation,
  Positional
};





