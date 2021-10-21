#include <no.h>
#include <listallse.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
int main()
{
        int const TAMANHO = 10;
        int op=0;
        int elemento;
        listallse teste;


    for (int i =0; i < TAMANHO; i++)
    {
        teste.insereInicio(rand()%100);
    }


    std::cerr<<"Quantidade de elementos na lista "<<teste.qtdElementos()<<std::endl;
    std::cerr<<"1 - retirar elemento do inicio "<<std::endl;
    std::cerr<<"2 - inserir elemento no fim "<<std::endl;
    std::cerr<<"3 - inserir elemento no inicio "<<std::endl;
    std::cerr<<"4 - Retirar todos do inicio "<<std::endl;
    std::cerr<<"0 - SAIR \nop: ";
    std::cin>>op;
while(op)
{
    switch (op) {
    case 1:
        system("clear");
            std::cerr<<"*****************\n"<<teste.retirarInicio() <<"\n*****************REMOVIDO\n\n";
        break;
    case 2:
        system("clear");
        std::cerr<<"Elemento: ";
        std::cin>>elemento;
        teste.insereFim(elemento);
        std::cerr<<"*****************\n"<<elemento<<"\n*****************INSERIDOFIM\n\n";
        elemento = 0;
        break;
    case 3:
        system("clear");
        std::cerr<<"Elemento: ";
        std::cin>>elemento;
        teste.insereInicio(elemento);
        std::cerr<<"*****************\n"<<elemento<<"\n*****************INSERIDOINICIO\n\n";
        elemento = 0;
        break;
    case 4:
        system("clear");
        std::cerr<<"*****************\n";
        while(teste.qtdElementos())
        {
            std::cerr<<teste.retirarInicio()<<" ";
        }
        std::cerr<<"\n*****************FILA\n\n";

        break;
    default:
        break;
    }
        std::cerr<<"Quantidade de elementos na lista "<<teste.qtdElementos()<<std::endl;
        std::cerr<<"1 - retirar elemento do inicio "<<std::endl;
        std::cerr<<"2 - inserir elemento no fim "<<std::endl;
        std::cerr<<"3 - inserir elemento no inicio "<<std::endl;
        std::cerr<<"4 - Retirar todos do inicio "<<std::endl;
        std::cerr<<"0 - SAIR \nop: ";
        std::cin.ignore();
        std::cin>>op;

}

}
