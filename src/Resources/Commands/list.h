#pragma once
#include "../GlobalVariables.h"


void list(TokenGroup& tokens){
  std::vector<Token> positional = tokens.positional;
  std::filesystem::path path = std::filesystem::current_path();

  if(positional.size() != 0){
    path = positional[0].name;
  }

  for(const auto& entry : std::filesystem::directory_iterator(path) ){
    std::cout << entry.path().filename().string() << "\n";
  }
}
