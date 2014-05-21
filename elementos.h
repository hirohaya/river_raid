#ifndef H_ELEMENTOS
#define H_ELEMENTOS

typedef struct defesa {
    int posicao_h, posicao_v, posicao_c;
    int precisao;
    int dano;
    int frequencia_atq;
    int vel_atq;
} Defesa;

typedef struct nave{
    int posicao_h;
    int posicao_v;
    int posicao_c;
    int velocidade;
    int orientacao_h;
    int orientacao_v;
    int orientacao_c;
    int dano;
    int hp;
    int powerup;
} Nave;

typedef struct tiro {
    int posicao_h;
    int posicao_v;
    int posicao_c;
    int orientacao_h;
    int orientacao_v;
    int orientacao_c;
    int velocidade;
    int dano_atk;
} Tiro;
typedef enum tipo{NAVE, TIRO, DEFESA, CORREDOR, SOLIDO} Tipo;

/* Unidades da linha */
typedef struct celula {
    Tipo tipo;
    union {
        Nave *nave;
        Tiro *tiro;
        Defesa *defesa;
        /*int corredor = 3; NAO PODE TER ISSO AQUI*/
        /*      int solido = 4;*/
        } elemento;
} Celula;

/* Linha que será impressa no terminal, nos da lista */
typedef struct linha {
    Celula* linha;
    int margem_d;       /*Tamanho da margem direita*/
    int margem_e;       /*Tamanho da margem esquerda*/
    struct linha *ant;
    struct linha *prox;
} Linha;


#endif
