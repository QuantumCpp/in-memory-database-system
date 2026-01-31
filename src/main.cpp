#include "SystemUtilites/EnumsClass/ValidationError.h"
#include "SystemUtilites/Structs/TokenGroup.h"
#include "Utils/RegisterAllCommands/RegisterAllCommands.h"
#include "Utils/RegisterAllOptions/RegisterAllOptions.h"
#include "PipelineProcees/ProccesOfTokenization/ProccesOfTokenization.h"
#include "PipelineProcees/ProccesOfClasification/ProceesOfClasification.h"
#include "PipelineProcees/ProceesOfValidationTokens/ProceesOfValidationTokens.h"
#include "SystemUtilites/MessageErrorDetail/MessageError.h"


int main(int argc, char* argv[]){
  //Registro de todos los comandos | opciones | errores actuales
  RegisterAllCommand();
  RegisterAllOptions();
  RegisterAllError();

  //Tomar todas los argumentos en crudo dados por el usuario a excepcio del nombre del ejecutable
  std::vector<std::string> ArgumentsRaw(argv + 1, argv + argc);
  //Realizar el proceso de tokenizacion y guardarlos en una variable
  std::vector<Token> TokenRaw = Tokenization(ArgumentsRaw);
  TokenGroup TokenGroupRaw;
  //Realizar el proceso de clasificacion
  if(ClasificationDataToken(TokenRaw, TokenGroupRaw) != ValidationError::AllCorrect){
    return 1;
  };
  
  //Realiar proceso de validacion
  if(ValidationDataToken(TokenRaw,TokenGroupRaw) != ValidationError::AllCorrect){
    return 1;
  };

  //Realizar proceso de ejecucion


  return 0;


}
