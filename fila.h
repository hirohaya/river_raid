#ifndef FILA_H
#define FILA_H

#include <stdio.h>
#include <stdlib.h>


#include "elementos.h"



typedef struct fila{

	Linha *ini;
	Linha *fim;
	
} Fila;




void insere_fila(Linha *linha);
void fila_init();
void remove_fila();

#endif /*FILA_H*/

