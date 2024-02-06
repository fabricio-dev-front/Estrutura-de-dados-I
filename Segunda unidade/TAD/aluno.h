// definição de novo tipo: Aluno 

typedef struct aluno Aluno;

// Função que aloca memoria para um struct aluno, recebe os dados via teclado e retorna um ponteiro para Aluno //
Aluno * recebe_dados(void);

// função que recebe um ponteiro para aluno e imprime os dados
void imprime(Aluno * aluno);
