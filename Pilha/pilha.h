// Pilha = Stack

// Primeiro declaramos: classes, funções e variáveis

typedef int TipoItem; // Facilita caso precise mudar o tipo (Ex.: int para floa)
const int max_itens = 100;

class pilha {
    private:
        int tamanho; 
        TipoItem* estrutura; // Vetor(Array)

    public:
        pilha(); // Função Construtora (cria objetos)
        ~pilha(); // destrutora
        bool estaCheia(); // verifica se a pilha está cheia
        bool estaVazia(); // verifica se a pilha está vazia
        void inserir(TipoItem item); // push
        TipoItem remover(); // pop
        void imprimir(); // print
        int qualTamanho(); // length
};