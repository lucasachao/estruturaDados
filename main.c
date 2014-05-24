#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

int main()
{
    matriz_t *t = criarMatriz(4, 5);

    putValorMatriz(t, 2, 2, 25.5);

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
            printf("%f\t", getValorMatriz(t, i, j));
        printf("\n");
    }

    apagaMatriz(t);

    return EXIT_SUCCESS;
}
