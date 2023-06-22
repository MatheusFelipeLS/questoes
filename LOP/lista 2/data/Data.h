#ifndef DATA_H
#define DATA_H

class Data {
  public:
    Data(int, int, int);

    int getDia();
    int getMes();
    int getAno();

    void setDia(int);
    void setMes(int);
    void setAno(int);

    void avancarDia();

    void printData();

  private:
    int dia;
    int mes;
    int ano;
};

#endif