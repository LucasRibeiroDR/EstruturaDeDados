#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "listaLinearSeqEstatica.h"
#define MAX 50

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave
}REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int numElemento;
}LISTA;

void inicializaLista(LISTA *l){
    l->numElemento = 0;
}

int tamanho(LISTA *l){
    return l->numElemento;
}

void exibirlista(LISTA *l){
    int i;
    printf("Lista: \" ");
    for(i=0; i<l->numElemento; i++){
        printf("%i ", l->A[i].chave);
    }
    printf("\"\n");
}

int buscaSequencial (LISTA *l, TIPOCHAVE ch){
    int i=0;
    while(i< l->numElemento){
        if(ch==l->A[i].chave){
            return i;
        }
        else {
            i++;
        }
        return -1;
    }
}

int inserirElemLista(LISTA *l, REGISTRO reg, int i){
    int j;
    if((i<0) || (i>l->numElemento) || (l->numElemento == MAX )){
        return -1;
    }

    for(j=l->numElemento; j>i; j--){
        l->A[j] = l->A[j-1];
        l->A[i] = reg;
        l->numElemento++;
        return 0;
    }
}

int excluirElemLista(TIPOCHAVE ch, LISTA *l){
    int pos, j;
    pos = buscaSequencial(l,ch);
    if(pos==-1){
        return -1;
    }
    for(j=pos; j< l->numElemento-1; j++){
        l->A[j] = l->A[j+1];
        l->numElemento--;
        return 0;
    }
}

void reinicializacao(LISTA *l){
    l->numElemento=0;
}
