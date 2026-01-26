#pragma once

#include "EnumsGlobal.h"
#include "GlobalVariables.h"
#include <string>
#include <unordered_map>
#include "OrderTokens.h"


GroupDataValidation Validation(std::vector<Token>& tokens, TokenGroup& GpToken){
  
  int CommandFound = 0;
  int CantSeparationFound = 0;
  bool SeparationFound = false;
  GroupDataValidation DataValidaton;

  std::unordered_map<std::string ,int>SeenOption;

  for (size_t i = 0 ; i < tokens.size() ; i ++){
    Token token = tokens[i];
    
    //Comando en posicion incorrecta
    if (i == 0){
      if(tokens[i].type != TypeToken::Command){
        DataValidaton.Error = ValidationError::CommandIncorrectPosition;
        DataValidaton.SpecificError = "Comando en posicion incorrecta: " + std::to_string(i) + "\n";
        return DataValidaton;
      }
    }

    //Validar que un comando existe y solo hay uno : 
    if (token.type == TypeToken::Command){
      if (CommandSpec.find(token.name) != CommandSpec.end()){
        CommandFound += 1;
        if (CommandFound > 1){
          DataValidaton.Error = ValidationError::MoreOfCommand;
          DataValidaton.SpecificError = "Mas de un comando introducido\n";
          return DataValidaton;
        }
        continue;
      }
      else{
        DataValidaton.Error = ValidationError::CommandNotFound;
        DataValidaton.SpecificError = "Comando " + token.name + " No encontrado\n";
        return DataValidaton;
      }
    }
    
    if(token.type == TypeToken::Option){

      if (SeenOption.find(token.name) != SeenOption.end()){
        tokens.erase(tokens.begin() + i);
        --i;
        continue;
      }

      if (OptionSpec.find(token.name)  != OptionSpec.end()){

        if((OptionSpec.at(token.name) == ValuePolicy::None && token.value == "") ||  
            (OptionSpec.at(token.name) == ValuePolicy::Required && token.value != ""))
        {
          SeenOption[token.name] = 1;
          continue;
        }
         if (OptionSpec.at(token.name) == ValuePolicy::None && token.value != "") 
         {
           DataValidaton.Error = ValidationError::OptionNotRequiredValue;
           DataValidaton.SpecificError = "Opcion " + token.name + " No requiere valor\n";
           return DataValidaton; 
         } 
         if (OptionSpec.at(token.name) == ValuePolicy::Required && token.value == "") 
         {
           DataValidaton.Error = ValidationError::OptionRequiredValue;
           DataValidaton.SpecificError = "Opcion " + token.name + " requiere valor\n";
           return DataValidaton; 
         }
      }
      else{
        DataValidaton.Error = ValidationError::OptionNotFound;
        DataValidaton.SpecificError = "Opcion " + token.name + " no encontrada\n";
        return DataValidaton;
      }
    }

    if(token.type == TypeToken::Separation){
      SeparationFound = true;
      CantSeparationFound++;
      continue;
    }

    if (SeparationFound == true && CantSeparationFound == 1){
      tokens[i].type = TypeToken::Positional;
    }

    if (CantSeparationFound > 1){
      DataValidaton.Error = ValidationError::MoreSeparationSignal;
      DataValidaton.SpecificError = "Mas de un comando de separacion (--) introducido\n";
      return DataValidaton;
    }

  }
  
  GroupToken(tokens, GpToken);
  DataValidaton.Error = ValidationError::AllCorrect;
  DataValidaton.SpecificError = " ";
  return DataValidaton;
}

