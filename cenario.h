#ifndef H_CENARIO
#define H_CENARIO

#include "aleatorio.h"
#include "nave.h"
#include "defesa.h"
#include "tiro.h"
#include "fila.h"



void cria_tela();
void imprime_tela();
void atualiza_tela(Linha* cenario);
void remove_linha(Linha* cenario);
void update_tela();
void cria_linha(int margem_e, int margem_d);


#endif

