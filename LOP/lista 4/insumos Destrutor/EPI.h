#pragma once
#include "Insumos.h"

class EPI : public Insumos {
public:
    EPI();
    ~EPI();

    string getTipo();
    string getDescricao();

    void setTipo(string);
    void setDescricao(string);

    void lerAtributos();

private:
    string tipo;
    string descricao;
};