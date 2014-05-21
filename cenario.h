#ifndef H_CENARIO
#define H_CENARIO


#include "fila.h"
#include "aleatorio.h"
#include "nave.h"
#include "defesa.h"
#include "tiro.h"

Linha *cria_linha(int tam_linha, int semente, int max_margem, int min_margem);
void atualiza_linha(Linha* cenario);
void remove_linha(Linha* cenario);

#endif
