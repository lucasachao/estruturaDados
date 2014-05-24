#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

struct matriz
{
    double ** valor;
    int x;
    int y;
};

matriz_t *criarMatriz(int x, int y)
{
    if(x > 0 && y > 0)
    {
        struct matriz *m = malloc(sizeof(struct matriz));
        m->x = x;
        m->y = y;
        m->valor = malloc(sizeof(double*)*x);
        for(int i = 0; i < y; i++)
            m->valor[i] = calloc(y,sizeof(double));

        return m;
    }
    else return NULL;
}

void putValorMatriz(matriz_t *m, int x, int y, double value)
{
    if(x < m->x && y < m->y)
        m->valor[x][y] = value;
}

double getValorMatriz(matriz_t *m, int x, int y)
{
    if(x < m->x && y < m->y)
        return m->valor[x][y];
    else
        return -1.0;
}

void apagaMatriz(matriz_t *m)
{
    if(!m)
    {
        for(int i = 0; i < m->x; i ++)
            free(m->valor[i]);
        free(m->valor);
        free(m);
        m = NULL;
    }
}
