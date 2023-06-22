//Funcionario.h
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>

using namespace std;

class Funcionario {
  public:
    Funcionario();
    ~Funcionario();

    string getNome();
    int getMatricula();

    void setMatricula(int);
    void setNome(string);

    virtual void lerAtributos();
    virtual double calcularSalario() = 0;

  protected:
    string nome;
    int matricula;
};

#endif

//Funcionario.cpp
//#include "Funcionario.h"

Funcionario::Funcionario() {
  
}

Funcionario::~Funcionario() {
  
}

string Funcionario::getNome() {
  return nome;
}

int Funcionario::getMatricula() {
  return matricula;
}

void Funcionario::setMatricula(int m) {
  matricula = m;
}

void Funcionario::setNome(string n) {
  nome = n;
}

void Funcionario::lerAtributos() {
  
}

//OrcamentoEstouradoException.h
#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
//#include <iostream>
#include <stdexcept>

using namespace std;

class OrcamentoEstouradoException : public runtime_error {
  public:
    OrcamentoEstouradoException(const char *e = "OrcamentoEstouradoException ") : runtime_error(e) {}
};

#endif

//FuncionarioNaoExisteException.h
#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
//#include <iostream>
//#include <stdexcept>

using namespace std;

class FuncionarioNaoExisteException : public runtime_error {
  public:
    FuncionarioNaoExisteException(const char *e = "FuncionarioNaoExisteException ") : runtime_error(e) {}
};

#endif

//Assalariado.h
#ifndef ASSALARIADO_H
#define ASSALARIADO_H
//#include "Funcionario.h"

class Assalariado : public Funcionario {
  public:
    Assalariado();
    ~Assalariado();

    double calcularSalario();
    void lerAtributos();

  private:
    double salario;
};

#endif

//Assalariado.cpp
//#include "Assalariado.h"

Assalariado::Assalariado() {
  //ctor
}

Assalariado::~Assalariado() {
  //dtor
}

double Assalariado::calcularSalario() {
  return salario;
}

void Assalariado::lerAtributos() {  
  getline(cin, nome);
  cin >> matricula;
  cin >> salario;
  cin.ignore();
}

//Comissionado.h
#ifndef COMISSIONADO_H
#define COMISSIONADO_H
//#include "Funcionario.h"

class Comissionado : public Funcionario {
  public:
    Comissionado();
    ~Comissionado();

    double calcularSalario();
    void lerAtributos();

  private:
    double vendasMensais;
    double percentualComissao;
};

#endif

//Comissionado.cpp
//#include "Comissionado.h"

Comissionado::Comissionado() {
  //ctor
}

Comissionado::~Comissionado() {
  //dtor
}

double Comissionado::calcularSalario() {
  return (vendasMensais * percentualComissao);
}

void Comissionado::lerAtributos() {
  getline(cin, nome);
  cin >> matricula;
  cin >> vendasMensais;
  cin >> percentualComissao;
  cin.ignore();
}

//Horista.h
#ifndef HORISTA_H
#define HORISTA_H
//#include "Funcionario.h"

class Horista : public Funcionario {
  public:
    Horista();
    ~Horista();

    double calcularSalario();
    void lerAtributos();

  private:
    double salarioPorHora;
    double horasTrabalhadas;
};

#endif

//Horista.cpp
//#include "Horista.h"

Horista::Horista() {
  //ctor
}

Horista::~Horista() {
  //dtor
}

void Horista::lerAtributos() {
  getline(cin, nome);
  cin >> matricula;
  cin >> salarioPorHora;
  cin >> horasTrabalhadas;
  cin.ignore();
}

double Horista::calcularSalario() {
  if(horasTrabalhadas <= 40) {
    return (4 * horasTrabalhadas * salarioPorHora);
  }else {
    return (4 * ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5))));
  }
}

//SistemaGerenciaFolha.h
#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include <vector>
//#include "Funcionario.h"
//#include "Horista.h"
//#include "Assalariado.h"
//#include "Comissionado.h"
//#include "OrcamentoEstouradoException.h"
//#include "FuncionarioNaoExisteException.h"

class Sistema {
  public:
    Sistema();
    Sistema(double);
    ~Sistema();

    void setFuncionarios(Funcionario *func);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string);

  private:
    vector<Funcionario *> funcionarios;
    double orcamento = 0.0;
};

#endif

//SistemaGerenciaFolha.cpp
//#include "SistemaGerenciaFolha.h"

Sistema::Sistema() {
  //ctor
}

Sistema::Sistema(double vm) {
  orcamento = vm;
}

Sistema::~Sistema() {
  //dtor
}

void Sistema::setFuncionarios(Funcionario *func) {
  funcionarios.push_back(func);
}

double Sistema::calculaValorTotalFolha() {
  double soma = 0.0;
  try {
    for(int i = 0; i < funcionarios.size(); i++ ) {
      soma += funcionarios[i]->calcularSalario();
    }
    
    if(soma > orcamento) {
      throw OrcamentoEstouradoException();
    }
    
  }catch(OrcamentoEstouradoException &e) {
    cerr << e.what();
    return soma;
  }
  
  return soma;
}

double Sistema::consultaSalarioFuncionario(string n) {
  int verif = -1;
  for(int i = 0; i < funcionarios.size(); i++) {
    if(n.compare(funcionarios[i]->getNome()) == 0) {
      verif = i;
      break;
    }
  }
  if(verif == -1) {
    throw FuncionarioNaoExisteException();
  }
  return funcionarios[verif]->calcularSalario();
}

//main.cpp
//#include <iostream>
//#include "SistemaGerenciaFolha.h"

int main() {
  double orcamento;
  Assalariado as;
  Horista ho;
  Comissionado co;
  string nome;

  cin >> orcamento;
  cin.ignore();
  
  Sistema sistema = Sistema(orcamento);
  
  as.lerAtributos();
  sistema.setFuncionarios(&as);
  
  ho.lerAtributos();
  sistema.setFuncionarios(&ho);
  
  co.lerAtributos();
  sistema.setFuncionarios(&co);

  for(int i = 0; i < 3; i++) {
    try {
      getline(cin, nome);
      cout << sistema.consultaSalarioFuncionario(nome) << endl;
    }catch(FuncionarioNaoExisteException &e) {
      cerr << e.what() << nome << endl;
    }
  }
  
  cout << sistema.calculaValorTotalFolha() << endl;
  
  return 0;
}