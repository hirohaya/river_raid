#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "cenario.h"



extern Linha linha[T_ALT];
extern Fila *fila;



void cria_linha(int margem_e, int margem_d){

	int i;
	Linha *nova;

	nova = malloc(sizeof(Linha));
	nova->margem_e = margem_e;
	nova->margem_d = margem_d;
	
	/*Percorrer a linha  para atribuir o tipo de cada no*/
	for(i = 0; i < T_LARG; i++){
			if(i <= nova->margem_e || i >= nova->margem_d){
				nova->linha[i].tipo = SOLIDO;
			}
			else{
				nova->linha[i].tipo = CORREDOR;
			}
	}

	insere_fila(nova);
}



void cria_tela(){

	int i;
	int m_e;
	int m_d;
	
	fila_init();

	/*Atribuicoes feitas para o compilador parar de me enxer o saco com variavel nao inicializada*/
	m_e = 0;
	m_d = 0;
	srand(time(NULL));

	/*Cria a primeira linha com margens aleatorias respeitando seus valores maximos e minimos*/
	cria_linha(i_rand(MIN_MARGEM, MAX_MARGEM), i_rand(T_LARG - MAX_MARGEM, T_LARG - MIN_MARGEM));

	for(i = 0; i < T_ALT;  i++){
		
		m_e = (fila->fim)->margem_e + i_rand(-1, 1);
		m_d = (fila->fim)->margem_d + i_rand(-1, 1);
		
		if(m_e < MIN_MARGEM)	m_e = (fila->fim)->margem_e + i_rand(0, 1);
		if(m_e > MAX_MARGEM)	m_e = (fila->fim)->margem_e + i_rand(-1, 0);

		if(m_d < (T_LARG - MAX_MARGEM))	m_d = (fila->fim)->margem_d + i_rand(0, 1);
		if(m_d > (T_LARG - MIN_MARGEM)) m_d = (fila->fim)->margem_d + i_rand(-1, 0);

		cria_linha(m_e, m_d);
	}
}

/*void cria_tela(){
	
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
}*/


void imprime_tela(){

	int j;
	Linha *aux;

	/*Percorrer a fila para imprimir a tela, primeiro visitando cada no da fila e percorrendo o vetor linha[]*/
	for(aux = fila->fim; aux != fila->ini; aux = aux->prox){
		for(j = 0; j < T_LARG; j++){
			if(aux->linha[j].tipo == SOLIDO)
				printf("|");
			if(aux->linha[j].tipo == CORREDOR)
				printf(".");
		}
		puts("");
	}
}

/*void imprimi_tela(){

	int i;
	int j;

	for(i = T_ALT-1; i >= 0; i--){
		for(j = T_LARG; j >= 0; j--){
			if(linha[i].linha[j].tipo == SOLIDO)
				printf("|");
			if(linha[i].linha[j].tipo == CORREDOR)
				printf(".");
			if(linha[i].linha[j].tipo == NAVE)
				printf("^");
		}
		puts("");
	}
}*/

