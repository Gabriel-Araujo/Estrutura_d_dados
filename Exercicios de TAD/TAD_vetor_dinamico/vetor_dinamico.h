//
// Created by Gabriel on 03/09/2021.
//

#ifndef TAD_VETOR_DINAMICO_VETOR_DINAMICO_H
#define TAD_VETOR_DINAMICO_VETOR_DINAMICO_H

#include <stdlib.h>

typedef struct vetor_dinamico VetorDinamico;

VetorDinamico* criar_vetor(int n_elementos);
void liberar_vetor(VetorDinamico* vetor);

int inserir_vetor(VetorDinamico* vetor, float x);
int remove_elemento_fim(VetorDinamico* vetor);

int get_item(VetorDinamico* vetor, int posicao, float *valor_retorno);
int tamanho_vetor(VetorDinamico* vetor);


#endif //TAD_VETOR_DINAMICO_VETOR_DINAMICO_H
