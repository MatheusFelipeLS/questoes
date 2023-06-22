#ifndef INSUMOS_H
#define INSUMOS_H
#include <string>
#include <iostream>

using namespace std;

class Insumos {
    public:
        Insumos();
        virtual ~Insumos();

        string getNome();
        int getQuantidade();
        int getValorUnitario();
        string getDtVencimento();
        string getNomeFabricante();
        int getTipoInsumos();

        void setNome(string);
        void setQuantidade(int);
        void setValorUnitario(int);
        void setDtVencimento(string);
        void setNomeFabricante(string);
        void setTipoINsumos(int);

        virtual void lerAtributos();

    protected:
        string nome;
        int quantidade;
        int valorUnitario;
        string dtVencimento;
        string nomeFabricante;
        int tipoInsumos;    
};

#endif