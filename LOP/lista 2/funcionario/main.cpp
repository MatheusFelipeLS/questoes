#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.h"


using namespace std;

int main() {
//vetor com os dados dos funcionários
  vector<Funcionario> employeeData;
//Number of Employees - número de empregados
  int i, nEmployee;
//Nome e sobrenome(last Name)
  string name, lName;
//Salário - wage
  float wg;

  cin >> nEmployee;
  cin.ignore();
  
  for(i = 0; i < nEmployee; i++) {
  //Pegando os dados de um funcionário
    getline(cin, name);
    getline(cin, lName);
    cin >> wg;
    cin.ignore();

    Funcionario employee(name, lName, wg);
    
    //Atribuindo os valores a lista de funcionários
    employeeData.push_back(employee);
  }

  //Mostrando na tela os dados do funcionário
  for(i = 0; i < nEmployee; i++) {
    employeeData[i].displayMessage();
    employeeData[i].aumentaSalario(0.1);
    cout << employeeData[i].getSalarioAnual() << endl;
    }

  return 0;
}