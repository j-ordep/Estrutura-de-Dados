typedef int TipoItem;

struct No
{
    TipoItem valor;
    No* proximo;
};


class filadinamica {
    private:
        No* primeiro;
        No* ultimo;

    public:
        filadinamica(); // construtor
        ~filadinamica(); // destrutor
        bool estavazia(); // verifica se a pilha está vazia
        bool estacheia(); // verifica se a pilha está cheia
        void inserir(TipoItem item); // insere um item na pilha
        TipoItem remover(); // remove um item da pilha
        void imprimir(); // imprime a pilha
};