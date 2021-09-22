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

/*
 * Retorna 1 se inseriu com sucesso, ou 0 se ocorreu algum erro.
 */
int inserir_vetor(VetorDinamico* vetor, float x) {
    // Verifica se foi passado um ponteiro válido.
    if (vetor == NULL) {
        return 0;
    }

    // Verifica se há espaço alocado o suficiente para armazenar o valor passado.
    // Caso não há realoca o vetor com um adicional de 2 espaços.
    if (vetor->espaco_alocado == vetor->qnt_elementos) {
        vetor->espaco_alocado += 2;
        vetor->vetor = (float *) realloc(vetor->vetor, vetor->espaco_alocado * sizeof(float));
    }

    // Salva a informação passada na última posição.
    vetor->vetor[vetor->qnt_elementos++] = x;

    return 1;
}


int remove_elemento_fim(VetorDinamico* vetor) {
    if (vetor == NULL) return 0;

    vetor->vetor[vetor->qnt_elementos--] = 0;

    if (vetor->qnt_elementos - vetor->espaco_alocado == 3) {
        vetor->espaco_alocado -= 2;
        vetor->vetor = (float *) realloc(vetor->vetor, vetor->espaco_alocado * sizeof(float));
    }

    return 1;
}

int get_item(VetorDinamico* vetor, int posicao, float *valor_retorno) {
    // Verifica se foi passado um ponteiro válido.
    if (vetor == NULL) {
        return 0;
    }
    // Verifica se a posição recebida é válida.
    if (vetor->qnt_elementos <= posicao || posicao < 0) {
        return 0;
    }

    *valor_retorno = vetor->vetor[posicao];
    return 1;
}


int tamanho_vetor(VetorDinamico* vetor) {
    if (vetor == NULL) return 0;

    return vetor->qnt_elementos;
}