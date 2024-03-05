typedef struct lista Lista;

Lista *cria_lista(void);

Lista *insere_elementos(Lista *lista, int valor);

// imprime a lista encadeada
 void imprime_lista(Lista *lista_encadeada);

// Função que busca um elemento na lista encadeada
 void busca_elemento(Lista *lista_encadeada, int valor);