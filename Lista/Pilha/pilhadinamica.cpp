#include <iostream>
#include "pilhadinamica.h"
#include <cstddef> // null

using namespace std;

    pilhadinamica::pilhadinamica()
    {
        NoTopo = NULL;
    }

    pilhadinamica::~pilhadinamica()
    {
        No* NoTemp;
        while (NoTopo != NULL) {
            NoTemp = NoTopo;
            NoTopo = NoTopo->proximo;
            delete NoTemp;
        }
        
    }

    bool pilhadinamica::estavazia()
    {
        return (NoTopo == NULL);
    }

    bool pilhadinamica::estacheia()
    {
        No *NoNovo;
        try{
            NoNovo = new No;
            delete NoNovo;
            return false;
        }
        catch(bad_alloc exception)
        {
            return true;
        }
        
    }

    void pilhadinamica::inserir(TipoItem item)
    {
        if (estacheia()) {
            cout << "A pilha está cheia\n";
        } else {
            No *NoNovo = new No;
            NoNovo->valor = item;
            NoNovo->proximo = NoTopo;
            NoTopo = NoNovo;
        }
    }

    TipoItem pilhadinamica::remover()
    {
        if (estavazia()) {
            cout << "A pilha esta vazia\n";
            return 0;
        } else {
            No* NoTemp;
            NoTemp = NoTopo;
            TipoItem item = NoTopo->valor; // guarda o valor a ser removido parar exibilo
            NoTopo = NoTopo->proximo;
            delete NoTemp;
            return item;
        }
    }

    void pilhadinamica::imprimir()
    {
        No* NoTemp = NoTopo;
        cout << "Pilha: [ ";
        while(NoTemp != NULL) {
            cout << NoTemp->valor << " ";
            NoTemp = NoTemp->proximo;
        }
        cout << "]\n";
    }

