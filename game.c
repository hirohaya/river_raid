#include "game.h"

Linha linha[T_ALT];
Fila *fila;


void game_init(){

	cria_tela();

}



/*Da um update na tela criando uma nova linha, respeitando o tamanho maximo e minimo das margens, e inserindo ela no final da fila ao mesmo tempo que exclui a primeira linha da fila*/
void update_tela(){

	int m_e;
	int m_d;

	
	m_e = (fila->fim)->margem_e + i_rand(-1, 1);
	m_d = (fila->fim)->margem_d + i_rand(-1, 1);

	if(m_e < MIN_MARGEM)	m_e = (fila->fim)->margem_e + i_rand(0, 1);
	if(m_e > MAX_MARGEM)	m_e = (fila->fim)->margem_e + i_rand(-1, 0);
	
	if(m_d < (T_LARG - MAX_MARGEM))		m_d = (fila->fim)->margem_d + i_rand(0, 1);
	if(m_d > (T_LARG - MIN_MARGEM))		m_d = (fila->fim)->margem_d + i_rand(-1, 0);

	remove_fila();
	cria_linha(m_e, m_d);
}

