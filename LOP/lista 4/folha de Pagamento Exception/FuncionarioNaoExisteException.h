#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <iostream>
#include <stdexcept>

using namespace std;

class FuncionarioNaoExisteException : public runtime_error {
  public:
    FuncionarioNaoExisteException(const char *e = "FuncionarioNaoExisteException ") : runtime_error(e) {}
};

#endif