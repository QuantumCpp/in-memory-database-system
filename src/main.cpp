#include <string>
#include <vector>
#include <iostream>
#include <filesystem> 

//Comandos :
//1. Listar archivos y carpetas de un directorio == list
//  1.1 directorio actual : .
//  1.2 directorio raiz : ..
//  1.3 directorio en especifico : ruta del directorio

void list(std::vector<std::string>& argumentos){

}

void tokenizar(std::vector<std::string>& argumentos){

}

void Orquesta(std::vector<std::string>& argumentos){
  if (argumentos[0] == "list"){
    argumentos[0].clear();
    list(argumentos);
  }
}

int main(int argc, const char* argv[]){
  if (argc > 1){
    std::vector<std::string> argumentos(argv + 1,argv + argc);
    Orquesta(argumentos);
  }
  else{
    std::cout<<"PARAMETROS NO ESPECIFICADOS\n";
    std::cout<<"LLAMDA [COMANDO] [ESPECIFICACIONES]\n";
  }
  return 0;
}

