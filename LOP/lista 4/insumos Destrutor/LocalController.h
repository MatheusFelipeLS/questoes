#pragma once
#include <vector>
#include "Insumos.h"

class LocalController {
public:
    LocalController();
    ~LocalController();

    void addInsumosArr(Insumos *in, int index);
    void addInsumosVec(Insumos *in);

private:
    string nome;
    int tipo;
    Insumos *insumosArr[10];
    vector<Insumos *> insumosVec;
    int index = 0;
};