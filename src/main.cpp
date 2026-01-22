#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>
#include <filesystem> 

//Comandos:
//1.Listar archivos : Fecha de creacion - Nombre - Extension - Tamano 

enum class TypeToken{
  Command,
  Flags,
  OptionWithValue,
  Positional
};

struct Token{
  TypeToken type;
  std::string name;
  std::string value; //solo si es una OptionWithValue
};

bool StartWith(const std::string& arg, std::string start){
  return !arg.empty() && arg.find(start) == 0;
}

void list(std::vector<std::string> arg){

}

int main(int argc, const char* argv[] ){
  std::vector<std::string> arguments(argv + 1 , argv + argc);
  std::unordered_map<std::string, bool> Options{
    {"-f" , false},
    {"-t" , false},
    {"-e" , false},
    {"-s" , false},
    {"--extension" , true},
    {"--size", true}
  };
  std::vector<Token> tokens;

  bool OptionOnlyPositional = false;
  bool CommandFound = false;

  for(size_t i = 0 ; i < arguments.size() ; i++){
    const std::string& args = arguments[i];
    if(args == "--"){
      OptionOnlyPositional = true;
      continue;
    }
    
    if (!OptionOnlyPositional && !StartWith(args, "-") && !CommandFound){
      tokens.emplace_back(Token{TypeToken::Command, args, ""});
      CommandFound = true;
      continue;
    }
    
    if(!OptionOnlyPositional && StartWith(args, "-")){
      if(StartWith(args,"--")){
        auto pos = args.find("="); //Retorna Npos si no hay valor = en el argumento
        if (pos != std::string::npos){
          tokens.emplace_back(Token{TypeToken::OptionWithValue, args.substr(0, pos), args.substr(pos + 1)});

        }
        else{
          tokens.emplace_back(Token{TypeToken::OptionWithValue, args, ""});
        }
        continue;
      }
      tokens.emplace_back(Token{TypeToken::Flags, args, ""});
      continue;
    }

    if ((OptionOnlyPositional || !StartWith(args,"-")) && CommandFound){
      tokens.emplace_back(Token{TypeToken::Positional, args, ""});
      continue;
    }
  }
}

