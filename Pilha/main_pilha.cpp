#include <iostream>
#include "pilha.h"

// cout = imprima | escreve algo na tela
// cin = leia | le o comando recebido

using namespace std;

int main() {
    pilha pilha1; // pilha é a classe | pilha1 é o objeto
    TipoItem item; // item é uma variável, do tipo int(TipoItem)
    int opcao;
    cout << "Programa gerador de pilhas:\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha!\n";
        cin >> opcao; // cin é a entrada, onde recebera o valor e será atribuido a "opcao"
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido\n";
            cin >> item;
            pilha1.inserir(item); 
        } else if (opcao == 2) {
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        } else if (opcao == 3) {
            pilha1.imprimir();
        }

    } while (opcao != 0);

    return 0;
}