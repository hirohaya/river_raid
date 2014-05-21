#ifndef H_NAVE
#define H_NAVE
#include "elementos.h"

enum {h, v, c};

Nave cria_nave();
void atualiza_nave(Nave nave, int dano_recebido, int aceleracao, int powerup);
void remove_nave(Nave *nave);
#endif

