#include <stdio.h>
#include <stdlib.h>

#include "cenario.h"

static Linha linha[T_ALT];

/* Cria uma linha, que representara (em primeiro momento) a primeira
 * linha de pixels */
void cria_tela(){
	
	int i;
	int j;
	
	srand(SEMENTE);

	linha[0].margem_e = i_rand(MIN_MARGEM, MAX_MARGEM);
	linha[0].margem_d = i_rand(T_LARG - MAX_MARGEM, T_LARG);

	for(i = 1; i < T_ALT; i++){ 
		if(linha[i-1].margem_e == MIN_MARGEM){
			linha[i].margem_e = linha[i-1].margem_e + i_rand(0, 1);
		}

		if(linha[i-1].margem_d == MAX_MARGEM){
			linha[i].margem_d = linha[i-1].margem_d + i_rand(-1, 0);
		}
		else{
			linha[i].margem_e = linha[i-1].margem_e + i_rand(-1, 1);
			linha[i].margem_d = linha[i-1].margem_d + i_rand(-1, 1);
		}
	}
	
	for(i = 0; i < T_ALT; i++){
		for(j = 0; j < T_LARG; j++){
			if(j < linha[i].margem_e || j > linha[i].margem_d){
				linha[i].linha[j].tipo = SOLIDO;
			}
			else{
				linha[i].linha[j].tipo = CORREDOR;
			}
		}
	}
}


void imprimi_tela(){

	int i;
	int j;

	for(i = 0; i < T_ALT; i++){
		for(j = 0; j < T_LARG; j++){
			if(linha[i].linha[j].tipo == SOLIDO)
				printf("|");
			if(linha[i].linha[j].tipo == CORREDOR)
				printf(".");
		}
		puts("");
	}
}

