#include <iostream>
#include "Insumos.h"
#include "LocalController.h"
#include "Medicamento.h"
#include "Vacina.h"
#include "EPI.h"

int main() {
    LocalController lc;
    Insumos *in1, *in2;

    for(int i = 0; i < 3; i++) {
        switch(i) {
            case 0:
                in1 = new Vacina();
                in2 = new Vacina();
                break;
            case 1:
                in1 = new Medicamento();
                in2 = new Medicamento();
                break;
            case 2:
                in1 = new EPI();
                in2 = new EPI();
                break;
        }
        in1->lerAtributos();
        *in2 = *in1;
        lc.addInsumosArr(in1, i);
        lc.addInsumosVec(in2);
    }
    return 0;
}