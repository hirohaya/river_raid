#ifndef H_DEFESA
#define H_DEFESA

#include "elementos.h"

Defesa *cria_defesa(int p_h, int p_v, int p_c);
void atualiza_defesa(Defesa *torre, int p_h, int p_v, int p_c);
void remove_defesa(Defesa *torre);

#endif
