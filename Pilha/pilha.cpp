#include <iostream>
#include "pilha.h"

using namespace std;
    
    pilha::pilha()
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens]; // Recebe um novo elemento com tipo int (TipoItem), com tamanho maximo de 100 elementos (max_itens).
    }

    pilha::~pilha()
    {
        delete [] estrutura; // deleta todo o array(estrutura) | [] para dizer que é um array.
    }

    bool pilha::estaCheia()
    {
        return (tamanho == max_itens); // Caso o array(tamanho) tenha chegado em 100 elementos.
    }

    bool pilha::estaVazia()
    {
        return (tamanho == 0);
    }

    void pilha::inserir(TipoItem item) // item é o parametro do tipo int(TipoItem)
    {
        if (estaCheia()){
            cout << "A pilha está cheia!\n";
        } else {
            estrutura[tamanho] = item; // O vetor recebe um item, que tem como parametro (item)
            tamanho++; // Adiciona um item na ULTIMA posição do array.
        }
    }

    TipoItem pilha::remover()
    {
        if (estaVazia()) {
            cout << "A pilha está vazia!\n";
            return 0;
        } else {
            tamanho--; // Retira o ultimo elemento do array
            return estrutura[tamanho];
        } // o return deve estar na ultima linha, pos toda função encerra quando chega no return, logo "tamanho--" deve estar antes do return.
    }

    void pilha::imprimir()
    {
        cout << "Pilha: [ ";
        for (int i = 0; i < tamanho; i++) {
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int pilha::qualTamanho()
    {
        return tamanho;
    }