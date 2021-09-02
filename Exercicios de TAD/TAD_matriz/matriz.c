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


Matriz* criar_matriz(int qnt_colunas, int qnt_linhas) {
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->v = (float *) malloc(qnt_colunas * qnt_linhas * sizeof(float));

    mat->coluna = qnt_colunas;
    mat->linha = qnt_linhas;

    return mat;
}

void liberar_matriz(Matriz* mat) {
    free(mat->v);
    free(mat);
}


float acessar_elemento(Matriz* mat, int linha, int coluna) {
    return mat->v[linha * mat->coluna + coluna];
}


void atribuir_elemento(Matriz* mat, int linha, int coluna, float valor) {
    mat->v[linha * mat->coluna + coluna] = valor;
}
*/

// Para matriz de um vetor de vetores
// m colunas x n linhas

struct matriz {
    int linha;
    int coluna;
    float** v;
};


Matriz* criar_matriz(int qnt_colunas, int qnt_linhas) {
    Matriz* mat = (Matriz*) malloc(sizeof(Matriz));
    mat->v = (float **) malloc(qnt_colunas * sizeof(float *));

    for (int contador = 0; contador < qnt_colunas; contador++) {
        mat->v[contador] = (float *) malloc(qnt_linhas * sizeof(float));
    }

    mat->coluna = qnt_colunas;
    mat->linha = qnt_linhas;

    return mat;
}


void liberar_matriz(Matriz* mat) {

    for (int contador = 0; contador < mat->coluna; contador++) {
        free(mat->v[contador]);
    }

    free(mat->v);

    free(mat);
}


float acessar_elemento(Matriz* m, int linha, int coluna) {
    return m->v[coluna][linha];
}


void atribuir_elemento(Matriz* m, int linha, int coluna, float valor) {
    m->v[coluna][linha] = valor;
}


// Funções genéricas
int quantidade_linhas(Matriz* mat) {
    return mat->linha;
}


int quantidade_colunas(Matriz* mat) {
    return mat->coluna;
}