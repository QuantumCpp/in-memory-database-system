#include "EnumsGlobal.h"
#include "GlobalVariables.h"

void GroupToken(std::vector<Token>& tokens, TokenGroup& TokenGp){

  for (const auto& arg : tokens){

    if (arg.type == TypeToken::Command){
      TokenGp.command.emplace_back(arg);
      continue;
    }

    if (arg.type == TypeToken::Option){
      TokenGp.option.emplace_back(arg);
      continue;
    }

    if(arg.type == TypeToken::Separation){
      TokenGp.separation.emplace_back(arg);
      continue;
    }

    if (arg.type == TypeToken::Positional){
      TokenGp.positional.emplace_back(arg);
      continue;
    }

  }
}
