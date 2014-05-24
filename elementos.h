#ifndef H_ELEMENTOS
#define H_ELEMENTOS

#define T_ALT 120
#define T_LARG 70
#define MIN_MARGEM 5
#define MAX_MARGEM 20


typedef enum tipo{NAVE, TIRO, DEFESA, CORREDOR, SOLIDO} Tipo;



typedef struct defesa {

    int p_x;
    int p_y;
    int p_z;
    int precisao;
    int dano;
    int frequencia_atq;
} Defesa;


/*ainda nao usaremos posicao_c e as orientacoes*/
typedef struct nave{
    int p_x;
    int p_y;
    int p_z;
    int v_x;
    int v_y;
    int v_z;
    int dano;
    int hp;
    int powerup;
} Nave;



/*ainda nao usaremos posicao_c e as orientacoes*/

typedef struct tiro {
    int p_x;
    int p_y;
    int p_z;
    int v_x;
    int v_y;
    int v_z;
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
    struct linha *prox;
    struct linha *ant;
} Linha;


#endif

