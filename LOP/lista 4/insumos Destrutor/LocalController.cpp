#include "LocalController.h"

LocalController::LocalController() {
    //ctor
}

LocalController::~LocalController() {
    cout << "Deletando Local" << endl;

    for(int i = 0; i < 3; i++) {
        delete insumosArr[i];
    }

    for(int i = 0; i < 3; i++) {
        delete insumosVec[i];
    }
}

void LocalController::addInsumosArr(Insumos *in, int index) {
    insumosArr[index] = in;
}

void LocalController::addInsumosVec(Insumos *in) {
    insumosVec.push_back(in);
}
