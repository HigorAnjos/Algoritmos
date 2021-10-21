#include "listallse.h"
#include <iostream>
#include <stdlib.h>
listallse::listallse(): inicio(0), quantidadeelementos(0)
{

}

listallse::~listallse()
{
    no* aux; no* pt;
    if (!quantidadeelementos)
    {
        aux=inicio;
        while(aux)
        {
            pt=aux;
            aux = aux->getNext();
            delete pt;
        }
    }
}

listallse::listallse(no *ptr)
{
    inicio = ptr;
    quantidadeelementos++;
}

void listallse::insereInicio(int elemento)
{
    no* aux;
    try
    {
        aux = new no;

    }
    catch(std::bad_alloc&)
    {
         throw "Sem espaco";

    }

    aux->setInformacao(elemento);
    aux->setNo(inicio); // aux recebe endereco de inicio
    inicio = aux;
    quantidadeelementos++;

}

void listallse::insereFim(int elemento)
{
    no* aux;
    try
    {
        aux = new no;
    }
    catch(std::bad_alloc&)
    {
        throw "Sem espaco";
    }
    aux->setInformacao(elemento);// elemento pra inserir no fim da fila
    if (!quantidadeelementos)
    {
        inicio = aux;
        quantidadeelementos++;
        return;
    }
    no* andar = inicio;

    while(andar->getNext())
    {
           andar = andar->getNext();
    }
    andar->setNo(aux);
    quantidadeelementos++;
}

int listallse::retirarInicio()
{
    if (vazia())
    {
        no* aux = inicio;
        inicio = inicio->getNext();
        int valor  = aux->getInformacao();
        delete aux;
        quantidadeelementos--;
        return valor;

    }

}
