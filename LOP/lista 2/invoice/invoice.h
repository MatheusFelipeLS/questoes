#ifndef INVOICE_H
#define INVOICE_H

#include <string>

class Invoice {
  public:
    Invoice(int, std::string, int, float);
  
    float getInvoiceAmount();

    void setQt(int);
    void setPr(float);
    void setDescricao(std::string);
    void setCodigo(int);

    int getCodigo();
    std::string getDescricao();
    int getQuantidade();
    float getPreco();

    void displayMessage();
  private:
    int quantidade;
    int cod;
    std::string desc;
    float preco;

};

#endif
