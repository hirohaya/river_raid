#include "game.h"

static Celula lista_obj[T_LARG*T_ALT];
Linha linha[T_ALT];



void game_init(){

	cria_tela();
	insere_objs();
	imprimi_tela();

}



void insere_objs(){

	lista_obj[0].elemento.nave = cria_nave();
	linha[lista_obj[0].elemento.nave.posicao_v].linha[lista_obj[0].elemento.nave.posicao_h].tipo = NAVE;
}

