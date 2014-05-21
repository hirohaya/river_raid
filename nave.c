#include <stdlib.h>
#include "nave.h"

Nave cria_nave(){
    Nave nave;
    
    /* A posicao incial da tela e em T_LARG/2 e T_ALT/5  */
    nave.posicao_h = T_LARG/2;
    nave.posicao_v = T_ALT/5;
    nave.posicao_c = 0;

    nave.velocidade = 1;
    nave.orientacao_h = 1;
    nave.orientacao_v = 0;
    nave.orientacao_c = 0;
    nave.dano = 1;
    nave.hp = 42;
    nave.powerup = 0;

    return nave;
}

void atualiza_nave(Nave nave, int dano_recebido, int aceleracao, int powerup){
    /* Melhora o dano infligido pela nave */
    nave.dano += powerup;
    /* Diminui o hp de acordo com o dano sofrido */
    nave.hp -= dano_recebido;
    /* Aumenta a velocidade da nave */
    nave.velocidade += aceleracao;
}

void remove_nave(Nave *nave){
    free(nave);
}

