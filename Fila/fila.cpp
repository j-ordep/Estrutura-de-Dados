#include <iostream>
#include "fila.h"

using namespace std;

    fila::fila() // Construtor
    {
        primeiro = 0;
        ultimo = 0;
        estrutura = new TipoItem[max_itens];
    }

    fila::~fila() // Destrutor
    {
        delete [] estrutura;
    }

    bool fila::estavazio() // IsEmpty
    {
        return (primeiro == ultimo);
    }

    bool fila::estacheio() //IsFull
    {
        return (ultimo - primeiro == max_itens);
    }

    void fila::inserir(TipoItem item) // push | enQueue
    {
        if (estacheio()) {
            cout << "A lista está cheia!\n";
        } else {
            estrutura[ultimo % max_itens] = item;
            ultimo++;
        }
    }

    TipoItem fila::remover() // pop | deQueue
    {
        if (estavazio()) {
            cout << "A fila está vazia!\n";
            return 0;
        } else {
            primeiro++;
            return estrutura[primeiro-1 % max_itens];
        }
        
    }

    void fila::imprimir() // print
    {
        cout << "Fila [ ";
        for (int i = primeiro; i < ultimo; i++) {
            cout << estrutura[i % max_itens] << " ";
        }
        cout << "]\n";
    }