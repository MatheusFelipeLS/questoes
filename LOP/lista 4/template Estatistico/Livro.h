#pragma once
#include <string>

class Livro {
    public:
        Livro();
        ~Livro();
        Livro(std::string, int);

        int getTotal();
        void toString();

   private:
    std::string titulo;
    int totalPaginas;
};