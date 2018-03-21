#ifndef LISTALINEARSEQESTATICA_H_INCLUDED
#define LISTALINEARSEQESTATICA_H_INCLUDED
#include "listaLinearSeqEstatica.c"

void inicializaLista(LISTA*); ///se algum ponteiro tem valor diferente de null, usa-se um asterisco (Ex: *p).
int tamanho(LISTA*);
void exibirLista(LISTA*);
int buscaSequencial(LISTA*, TIPOCHAVE);
int inserirElemLista(LISTA*, REGISTRO, int);
int excluirElemLista(TIPOCHAVE, LISTA*);
void reinicializacao(LISTA*);

#endif // LISTALINEARSEQESTATICA_H_INCLUDED
