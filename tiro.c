#include <stdlib.h>
#include "tiro.h"

Tiro *cria_tiro(Celula *celula){
    Tiro *tiro = malloc(sizeof(Tiro));
    
    /* O tiro parte de uma nave*/
    if(celula->tipo == 1){
       /* tiro->posicao_h = celula->elemento.nave->posicao_h;
        tiro->posicao_v = celula->elemento.nave->posicao_v;
        tiro->posicao_c = celula->elemento.nave->posicao_c;*/
        /* Será definido quando a dinâmica do jogo for implementada */
       
	tiro->v_x = 1;
	tiro->v_y = 1;
        tiro->dano_atk = 1;
    }

    /* O tiro parte de um elemento de defesa*/
    if(celula->tipo == 3){
        tiro->p_x = celula->elemento.defesa->p_x;
        tiro->p_y = celula->elemento.defesa->p_y;

        tiro->p_z = celula->elemento.defesa->p_z;
        /* Será definido quando a dinâmica do jogo for implementada */

        tiro->v_x = 1;
	tiro->v_y = 1;
        tiro->dano_atk = 1;
    }

    return tiro;
}

/* Atualiza a posição do tiro de acordo com a orientação dele */
void atualiza_tiro(Tiro *tiro, int o_v, int o_h, int o_c){
    tiro->p_x += o_v;
    tiro->p_y += o_h;
    tiro->p_z += o_c;
}

void remove_tiro(Tiro *tiro){
    free(tiro);
}


