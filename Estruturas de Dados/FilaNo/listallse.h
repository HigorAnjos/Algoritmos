#ifndef LISTALLSE_H
#define LISTALLSE_H
#include <no.h>

class listallse
{
private:
    no* inicio;
    int quantidadeelementos;

public:
    listallse();
    ~listallse();
    listallse(no* ptr);
    void insereInicio(int elemento);
    void insereFim(int elemento);
    int retirarInicio();
    int qtdElementos(){return quantidadeelementos;}
    bool vazia(){return quantidadeelementos;}
};

#endif // LISTALLSE_H
/*
 * estrutura de texto
 * gerar alatoriamente 10 numeros
 * no main FAZER UMA CONSTANTE int const TAMANHO = 10
 *
*/
