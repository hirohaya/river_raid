#ifndef H_TIRO
#define H_TIRO

#include "elementos.h"


Tiro *cria_tiro(Celula *celula);
void atualiza_tiro(Tiro *tiro, int o_v, int o_h, int o_c);
void remove_tiro(Tiro *tiro);
#endif
