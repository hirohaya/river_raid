#include <stdlib.h>
#include "defesa.h"

Defesa *cria_defesa(int p_h, int p_v, int p_c){
    Defesa *torre = malloc(sizeof(Defesa));

    torre->precisao = 1;
    torre->dano = 1;
    /* Fará parte da dinâmica */
    torre->frequencia_atq = 0;
    torre->vel_atq = 1;
    torre->posicao_h = p_h;
    torre->posicao_v = p_v;
    torre->posicao_c = p_c;

    return torre;
}

void atualiza_defesa(Defesa *torre, int p_h, int p_v, int p_c){
  
    torre->posicao_h = p_h;
    torre->posicao_v = p_v;
    torre->posicao_c = p_c;
}


void remove_defesa(Defesa *torre){
    free(torre);
}
