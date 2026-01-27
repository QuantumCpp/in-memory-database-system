#pragma once
#include "Token.h"

struct TokenGroup{
  std::vector<Token> command;
  std::vector<Token> option;
  std::vector<Token> separation;
  std::vector<Token> positional;
};

