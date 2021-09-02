//
// Created by Gabriel on 02/09/2021.
//

#include <stdlib.h>

#include "matriz.h"


// Para matriz de um vetor simples
// m colunas x n linhas
// i linhas x j colunas

/*
struct matriz {
    int linha;
    int coluna;
    float* v;
};


Matriz* criar_matriz(int m, int n) {
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->v = (float *) malloc(m * n * sizeof(float));

    mat->coluna = m;
    mat->linha = n;

    return mat;
}

void liberar_matriz(Matriz* mat) {
    free(mat->v);
    free(mat);
}


float acessar_elemento(Matriz* mat, int i, int j) {
    return mat->v[i * mat->coluna + j];
}


void atribuir_elemento(Matriz* mat, int i, int j, float valor) {
    mat->v[i * mat->coluna + j] = valor;
}
*/

// Para matriz de um vetor de vetores
// m colunas x n linhas
// i linhas x j colunas

struct matriz {
    int linha;
    int coluna;
    float** v;
};


Matriz* criar_matriz(int m, int n) {
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->v = (float **) malloc(m * sizeof(float *));

    for (int contador = 0; contador < m; contador++) {
        mat->v[contador] = (float *) malloc(n * sizeof(float));
    }

    mat->coluna = m;
    mat->linha = n;

    return mat;
}


void liberar_matriz(Matriz* mat) {

    for (int contador = 0; contador < mat->coluna; contador++) {
        free(mat->v[contador]);
    }

    free(mat->v);

    free(mat);
}


float acessar_elemento(Matriz* m, int i, int j) {
    return m->v[i][j];
}


void atribuir_elemento(Matriz* m, int i, int j, float valor) {
    m->v[i][j] = valor;
}


// Funções genéricas
int quantidade_linhas(Matriz* mat) {
    return mat->linha;
}


int quantidade_colunas(Matriz* mat) {
    return mat->coluna;
}