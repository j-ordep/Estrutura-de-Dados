// Fila = Queue
typedef int TipoItem;
const int max_itens = 100;

class fila {
    private:
        int primeiro, ultimo; // ultimo - inserir || primeiro - remover
        TipoItem *estrutura;

    public:
        fila(); // Construtor
        ~fila(); // Destrutor
        bool estavazio(); // IsEmpty
        bool estacheio(); //IsFull
        void inserir(TipoItem item); // push | enQueue
        TipoItem remover(); // pop | deQueue
        void imprimir(); // print
};