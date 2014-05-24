#include "fila.h"



Fila *fila;


void fila_init(){

	fila = malloc(sizeof(Fila));
	fila->ini = NULL;
	fila->fim = NULL;

}



void insere_fila(Linha *linha){

	/*Em caso de fila vazia*/
	if(fila->ini == NULL && fila->fim == NULL){
		fila->ini = linha;
		fila->fim = linha;
	}

	else{
		linha->prox = fila->fim;
		(fila->fim)->ant = linha;
		fila->fim = linha;
	}

}



void remove_fila(){

	fila->ini = (fila->ini)->ant;
	free((fila->ini)->prox);

}

