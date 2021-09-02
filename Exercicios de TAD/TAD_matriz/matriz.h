//
// Created by Gabriel on 02/09/2021.
//

#ifndef TAD_MATRIZ_MATRIZ_H
#define TAD_MATRIZ_MATRIZ_H

typedef struct matriz Matriz;

Matriz* criar_matriz(int m, int n);
void liberar_matriz(Matriz* m);

float acessar_elemento(Matriz* m, int i, int j);
void atribuir_elemento(Matriz* m, int i, int j, float valor);

int quantidade_linhas(Matriz* m);
int quantidade_colunas(Matriz* m);

#endif //TAD_MATRIZ_MATRIZ_H
