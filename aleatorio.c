#include <stdlib.h>
#include "aleatorio.h"


int i_rand(int min, int max){
    double n;
    int i;
    n = (double) rand( ) / ((double) RAND_MAX + 1);
    i = n * (max - min + 1);
    return min + i;
}
