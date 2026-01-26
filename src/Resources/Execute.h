#include "GlobalVariables.h"
#include <filesystem>
#include "Commands/list.h"

void list(TokenGroup& tokens);

void Exectue(TokenGroup& tokens){
  if (tokens.command.empty()){
    std::cout << "Command not found\n";
    return ;
  }
  const Token& command = tokens.command.front();
  
  if(command.name == "list"){
      list(tokens);
  }
  

}

