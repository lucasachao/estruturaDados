#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz matriz_t;

matriz_t *criarMatriz(int size_n, int size_m);
void putValorMatriz(matriz_t *m, int x, int y, double value);
double getValorMatriz(matriz_t *m, int x, int y);
void apagaMatriz(matriz_t *m);

#endif
