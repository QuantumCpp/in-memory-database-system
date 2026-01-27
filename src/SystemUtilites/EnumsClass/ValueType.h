#pragma once

enum class ValueType{
  None, //no requiere nada
  String, //Requiere un string
  Integer, //Requiere un entero
  Float, //Requiere un valor flotante
  Path, //Requiere un directorio
  Date, //Formato YYYY-MM-DD
  Enum, //Date - Size - Name
};
