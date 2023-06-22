#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <iostream>
#include <stdexcept>

using namespace std;

class OrcamentoEstouradoException : public runtime_error {
  public:
    OrcamentoEstouradoException(const char *e = "OrcamentoEstouradoException ") : runtime_error(e) {}
};

#endif