#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

#include "game.h"



#define _XOPEN_SOURCE_700
#define MS_PER_FRAME 1000000/20



int main(int argc, char** argv){
	

	game_init();

	/*Loop de jogo, ele vai ficar pra sempre ou ate voce dar CTRL+C*/
	while(1){
		/*Achei melhor limpar a tela antes de imprimir o novo frame*/
		if(system("clear") == 1);
		update_tela();
		imprime_tela();
		/*Aqui e onde controlamos o FPS (Frames Per Second) do nosso jogo, quanto mais FPS's, mais suaves sao os movimentos*/
		usleep(MS_PER_FRAME);
	}

    return 0;

}

