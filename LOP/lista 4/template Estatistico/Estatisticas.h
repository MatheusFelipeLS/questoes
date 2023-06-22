#pragma once
#include <vector>

template <typename T>

class Estatisticas {
    public:
        int indexOfMaior(std::vector<T> vec) {
            T maior = vec[0];
            int index = 0;
            for(int i = 0; i < vec.size(); i++) {
                if(vec[i].getTotal() > maior.getTotal()) {
                    maior = vec[i];
                    index = i;
                }
            }
            return index;
        }

        int indexOfMenor(std::vector<T> vec) {
            T menor = vec[0];
            int index = 0;
            for(int i = 0; i < vec.size(); i++) {
                if(vec[i].getTotal() < menor.getTotal()) {
                    menor = vec[i];
                    index = i;
                }
            }
            return index;
        }

        float media(std::vector<T> vec) {
            float total = 0;
            for(T el : vec) {
                total += el.getTotal();
            }
            return total / vec.size();
        }

   private:

};