#include <stdio.h>

#include "vetor_dinamico.h"


void adicionar_elementos(VetorDinamico* vetor, int qnt) {
    for (int contador = 0; contador < qnt; contador++) {
        inserir_vetor(vetor, contador - 1);
    }
}

void exibir_elementos(VetorDinamico* vetor) {
    int qnt_de_elementos = tamanho_vetor(vetor);

    printf("Quantidade de elementos no vetor: %i\n", qnt_de_elementos);

    for (int contador = 0; contador < qnt_de_elementos; ++contador) {
        printf("elemento na posicao: %i = %.2f \n", contador, get_item(vetor, contador));
    }
    printf("\n");
}

int main() {
    int qnt_de_elementos_inicial = 5;
    VetorDinamico* vetor = criar_vetor(qnt_de_elementos_inicial);

    adicionar_elementos(vetor, qnt_de_elementos_inicial);

    exibir_elementos(vetor);

    printf("\n");
    printf("Adicionando mais 5 elementos elemento...\n");

    adicionar_elementos(vetor, qnt_de_elementos_inicial);

    exibir_elementos(vetor);

    liberar_vetor(vetor);


    return 0;
}
