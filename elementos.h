#ifndef H_ELEMENTOS
#define H_ELEMENTOS

#define T_ALT 50
#define T_LARG 70
#define MIN_MARGEM 6
#define MAX_MARGEM 20


typedef enum tipo{NAVE, TIRO, DEFESA, CORREDOR, SOLIDO} Tipo;



typedef struct defesa {

    int posicao_h, posicao_v, posicao_c;
    int precisao;
    int dano;
    int frequencia_atq;
    int vel_atq;
} Defesa;


/*ainda nao usaremos posicao_c e as orientacoes*/
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



/*ainda nao usaremos posicao_c e as orientacoes*/

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



/* Unidades da linha */
typedef struct celula {
    Tipo tipo;
    union {
        Nave nave;
        Tiro *tiro;
        Defesa *defesa;
        } elemento;
} Celula;



/* Linha que será impressa no terminal, nos da lista */
typedef struct linha {
    Celula linha[T_LARG];
    int margem_d;       /*Tamanho da margem direita*/
    int margem_e;       /*Tamanho da margem esquerda*/
} Linha;


#endif

