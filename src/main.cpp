#include <iostream>
#include <filesystem>
#include <cstring>

//Comandos :
//1. Listar archivos y carpetas de un directorio == list
//  1.1 directorio actual : .
//  1.2 directorio raiz : ..
//  1.3 directorio en especifico : ruta del directorio

int main(int argc, const char* argv[]){
  int i = 0;

  while(argv != nullptr){
    if(std::strcmp(argv[i], "main")){
      std::cout<<"comando llamada reconocido\n";
    }
  }
}

