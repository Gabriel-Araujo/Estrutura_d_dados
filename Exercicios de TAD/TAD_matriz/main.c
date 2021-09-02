#include <stdio.h>

#include "matriz.h"


int main() {
    Matriz* mat = criar_matriz(2, 2);

    for (int contador = 0; contador < quantidade_linhas(mat); contador++) {
        for (int contador1 = 0; contador1 < quantidade_colunas(mat); contador1++) {
            atribuir_elemento(mat, contador1, contador, contador+contador1);
        }
    }

    for (int contador = 0; contador < quantidade_linhas(mat); contador++) {
        for (int contador1 = 0; contador1 < quantidade_colunas(mat); contador1++) {
            printf("%.2f\n", acessar_elemento(mat, contador, contador1));
        }
    }
    
    liberar_matriz(mat);
    return 0;
}
