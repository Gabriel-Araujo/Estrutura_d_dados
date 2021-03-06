//
// Created by Gabriel on 02/09/2021.
//

#ifndef TAD_MATRIZ_MATRIZ_H
#define TAD_MATRIZ_MATRIZ_H

typedef struct matriz Matriz;

Matriz* criar_matriz(int m, int qnt_linhas);
void liberar_matriz(Matriz* m);

// Retorno -> 0 = Erro, 1 = Exito
int acessar_elemento(Matriz* m, int linha, int coluna, float retorno);
// Retorno -> 0 = Erro, 1 = Exito
int atribuir_elemento(Matriz* m, int linha, int coluna, float valor);

int quantidade_linhas(Matriz* m);
int quantidade_colunas(Matriz* m);

#endif //TAD_MATRIZ_MATRIZ_H
