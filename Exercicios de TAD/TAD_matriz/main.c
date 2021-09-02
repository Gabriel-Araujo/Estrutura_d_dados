#include <stdio.h>

#include "matriz.h"


int main() {
    Matriz* mat = criar_matriz(2, 3);
    int qnt_linhas = quantidade_linhas(mat);
    int qnt_colunas = quantidade_colunas(mat);

    for (int n_linha = 0; n_linha < qnt_linhas; n_linha++) {
        for (int n_coluna = 0; n_coluna < qnt_colunas; n_coluna++) {
            atribuir_elemento(mat, n_linha, n_coluna, n_linha + n_coluna);
        }
    }

    for (int n_linha = 0; n_linha < qnt_linhas; n_linha++) {
        for (int n_coluna = 0; n_coluna < qnt_colunas; n_coluna++) {
            printf("%.2f\n", acessar_elemento(mat, n_linha, n_coluna));
        }
    }
    
    liberar_matriz(mat);
    return 0;
}
