#pragma once
#include "Insumos.h"

class Vacina : public Insumos {
    public:
        Vacina();
        ~Vacina();

        string getTipo();
        int getQuantDoses();
        int getIntervalo();

        void setTipo(string);
        void setQuantDoses(int);
        void setIntervalo(int);

        void lerAtributos();

    private:
        string tipo;
        int quantDoses;
        int intervalo;
};