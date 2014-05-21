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
        tiro->orientacao_h = 0;
        tiro->orientacao_v = 0;
        tiro->orientacao_c = 0;

        tiro->velocidade = 1;
        tiro->dano_atk = 1;
    }
    /* O tiro parte de um elemento de defesa*/
    if(celula->tipo == 3){
        tiro->posicao_h = celula->elemento.defesa->posicao_h;
        tiro->posicao_v = celula->elemento.defesa->posicao_v;
        tiro->posicao_c = celula->elemento.defesa->posicao_c;
        /* Será definido quando a dinâmica do jogo for implementada */
        tiro->orientacao_h = 0;
        tiro->orientacao_v = 0;
        tiro->orientacao_c = 0;

        tiro->velocidade = 1;
        tiro->dano_atk = 1;
    }

    return tiro;
}

/* Atualiza a posição do tiro de acordo com a orientação dele */
void atualiza_tiro(Tiro *tiro, int o_v, int o_h, int o_c){
    tiro->posicao_h += o_v;
    tiro->posicao_v += o_h;
    tiro->posicao_c += o_c;
}

void remove_tiro(Tiro *tiro){
    free(tiro);
}


