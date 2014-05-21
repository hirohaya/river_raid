#ifndef H_CENARIO
#define H_CENARIO

#include "aleatorio.h"
#include "nave.h"
#include "defesa.h"
#include "tiro.h"

#define SEMENTE 424242


void cria_tela();
void imprimi_tela();
void atualiza_tela(Linha* cenario);
void remove_linha(Linha* cenario);
void update_tela();

#endif

