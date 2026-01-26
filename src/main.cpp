#include "Resources/EnumsGlobal.h"
#include "Resources/GlobalVariables.h"
#include "Resources/tokenization.h"
#include "Resources/validation.h"
#include "Resources/Execute.h"

int main(int argc, const char* argv[] ){

  std::vector<std::string> arguments(argv + 1 , argv + argc);
  std::vector<Token> token = Tokenization(arguments);
  TokenGroup GpToken;
  GroupDataValidation GroupData = Validation(token,GpToken);

  if(GroupData.Error == ValidationError::AllCorrect){
    Exectue(GpToken);
  }
  else{
    std::cout<< GroupData.SpecificError ;
  }
}

