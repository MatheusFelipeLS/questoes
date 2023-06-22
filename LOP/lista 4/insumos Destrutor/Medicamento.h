#pragma once
#include "Insumos.h"

class Medicamento : public Insumos {
public:
    Medicamento();
    ~Medicamento();

    string getDosagem();
    string getAdministracao();
    string getDisponibilizacao();

    void setDosagem(string);
    void setAdministracao(string);
    void setDisponibilizacao(string);

    void lerAtributos();

private:
    string dosagem;
    string administracao;
    string disponibilizacao;
};