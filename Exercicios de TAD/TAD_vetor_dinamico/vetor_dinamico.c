//
// Created by Gabriel on 03/09/2021.
//

#include "vetor_dinamico.h"

struct vetor_dinamico {
    int qnt_elementos;
    int espaco_alocado;
    float* vetor;
};


VetorDinamico* criar_vetor(int n_elementos) {
    VetorDinamico* vd = (VetorDinamico*) malloc(sizeof(VetorDinamico));

    vd->qnt_elementos = 0;
    vd->espaco_alocado = n_elementos;
    vd->vetor = (float *) malloc(n_elementos * sizeof(float));

    return vd;
}


void liberar_vetor(VetorDinamico* vec) {
    free(vec->vetor);
    free(vec);
}


int inserir_vetor(VetorDinamico* vetor, float x) {
    if (vetor == NULL) {
        return 0;
    }

    if (vetor->espaco_alocado == vetor->qnt_elementos) {
        vetor->espaco_alocado += 2;
        vetor->vetor = (float *) realloc(vetor->vetor, vetor->espaco_alocado * sizeof(float));
    }

    vetor->vetor[vetor->qnt_elementos++] = x;

    return 1;
}


float get_item(VetorDinamico* vetor, int posicao) {
    if (vetor->qnt_elementos <= posicao) {
        exit(1);
    }
    return vetor->vetor[posicao];
}


int tamanho_vetor(VetorDinamico* vetor) {
    return vetor->qnt_elementos;
}