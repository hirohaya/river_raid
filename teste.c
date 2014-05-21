#include <stdlib.h>
#include <stdio.h>

#include "cenario.h"
#include "fila.h"
#include "nave.h"
#include "defesa.h"
#include "tiro.h"
#include "linha.h"


int main(int argc, char **argv){
    
    Nave *nave;
    Defesa *torre;
    Tiro *tiro;

    nave = cria_nave();
    torre = cria_defesa(0,0,0);
    printf("Testando a nave\n");
    printf("    Posição horizontal: %d; valor esperado: %d\n ", nave->posicao_h, 0);
    printf("    Posição vertical : %d; valor esperado: %d\n ", nave->posicao_v, 0);
    printf("    Posição central: %d; valor esperado: %d\n ", nave->posicao_c, 0);
    printf("    Velocidade:%d; valor esperado: %d\n ", nave->velocidade, 1);
    printf("    Orientação horizontal: %d; valor esperado:%d\n ", nave->orientacao_h, 1);
    printf("    Orientação vertical: %d; valor esperado:%d\n ", nave->orientacao_h, 0);
    printf("    Orientação central: %d; valor esperado:%d\n ", nave->orientacao_h, 0);
    printf("    Dano: %d ; valor esperado: %d\n ", nave->dano, 1);
    printf("    HP: %d ; valor esperado: %d\n ", nave->hp, 42);
    printf("    Powerup: %d ; valor esperado: %d\n ", nave->powerup, 0);
    
    printf("Testando a torre\n");
    printf("    Posicao da defesa: (%d, %d, %d); valores esperados: (%d, %d, %d)\n", torre->posicao_h, torre->posicao_v, torre->posicao_c, 0, 0, 0);
    printf("    Frequencia de ataque: %d; valor esperado: %d\n", torre->frequencia_atq, 0);
    printf("    Velocidade de ataque: %d; valor esperado: %d\n", torre->vel_atq, 1);
    printf("    HP: %d; valor esperado: %d\n", torre->dano, 1);
    printf("    Raio de efeito do tiro (precisao): %d; valor esperado: %d\n", torre->precisao, 1);
    return 0;
    
}

