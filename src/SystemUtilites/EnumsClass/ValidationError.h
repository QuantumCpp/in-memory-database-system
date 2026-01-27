#pragma once

enum class ValidationError{
  AllCorrect = 1, 
  CommandIncorrectPosition = 2,
  CommandNotFound = 3,
  OptionNotFound = 4,
  OptionRequiredValue = 5,
  OptionNotRequiredValue = 6,
  MoreOfCommand = 7 ,
  MoreSeparationSignal = 8 
} ;
