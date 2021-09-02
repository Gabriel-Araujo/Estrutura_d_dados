#include <stdio.h>
#include <stdlib.h>

#include "ponto.h"

int main() {
    system("chcp 65001");
    system("cls");

    Ponto* p = criar_ponto(2.0, 1.0);
    Ponto* q = criar_ponto(3.4, 2.1);

    float d = distancia_entre_pontos(p, q);

    printf("A distância entre os pontos é: %.2f \n", d);

    liberar_ponto(p);
    liberar_ponto(q);

    return 0;
}
