#include <stdio.h>
#include <stdlib.h>

#include "cenario.h"

/* Cria uma linha, que representara (em primeiro momento) a primeira
 * linha de pixels
 */



Linha *cria_linha(int tam_linha, int semente, int max_margem, int min_margem){
    int i, rand;
    Nave *nave = cria_nave();
    Defesa *torre;
    
    /*DA A PORRA DOS MALLOC AI EM CIMA*/

    Linha *nova = malloc(sizeof(Linha));
    nova->linha = malloc(tam_linha * sizeof(Celula));
    
    srand(semente);


    /* Define as margens direita e esquerda */
    nova->margem_e = i_rand(min_margem, max_margem);
    nova->margem_d = i_rand(tam_linha-max_margem, tam_linha);
    
    /*defesa = cria_defesa(int p_h, int p_v, int p_c);*/

    
    


    for(i=0; i < tam_linha; i++){
        if((i <= (nova->margem_e - 1)) || i >= ((nova->margem_d - 1))) nova->linha[i].tipo = SOLIDO;
        else nova->linha[i].tipo = CORREDOR;
    }
    /* Insere a nave no meio do corredor */
        nova->linha[(nova->margem_d - nova->margem_e)/2].tipo = NAVE;
        nova->linha[(nova->margem_d - nova->margem_e)/2].elemento.nave = nave;

    /* Insere torre, se existir em alguma das duas margens*/
    if((rand = i_rand(0,1)) == 1){
        /* Define em qual margem a torre vai ficar*/
        rand = i_rand(0,1);
        if( rand == 1){
            torre = cria_defesa(0, nova->margem_e,0);
            nova->linha[nova->margem_e].elemento.defesa = torre; 

        }
        else{
            torre = cria_defesa(0, nova->margem_d,0);
            nova->linha[nova->margem_d].elemento.defesa = torre; 
        }
    }
    puts("");
    return nova;

}
