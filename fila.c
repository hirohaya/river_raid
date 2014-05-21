#include <stdlib.h>

#include "fila.h"

/* Inicia a fila com cabceça. */
Linha *cria_fila(){
	Linha *cabeca = malloc(sizeof(Linha));
	cabeca->ant = cabeca->prox = NULL;
	return cabeca;
}

/* Insere depois da cabeça */
void insere_linha(Linha *cabeca, Linha *nova){
    nova->prox = cabeca->prox;
    nova->ant = cabeca;
    cabeca->prox->ant = nova;
    cabeca->prox = nova;
}

/* Remove o primeiro elemento que entrou na fila*/
void remove_linha(Linha *cabeca){
    Linha *aux;

    for(aux = cabeca->prox; aux->prox != NULL; aux = aux->prox);
    aux->ant->prox = aux->prox;
    free(aux->linha);
    free(aux);
}

