#include <stdio.h>
#include <stdlib.h>

#include "complexos.h"


int main() {
    double a1, a2, b1, b2 = 0;
    double ar, br;
    int escolha = 0;

    system("chcp 65001");

    printf("Um número complexo consiste em: a + bi. Onde i é o número irreal!\n");

    printf("Digite o termo 'a' do primeiro número: ");
    scanf("%le", &a1);

    printf("Digite o termo 'b' do primeiro número: ");
    scanf("%le", &b1);

    printf("Digite o termo 'a' do segundo número: ");
    scanf("%le", &a2);

    printf("Digite o termo 'b' do segundo número: ");
    scanf("%le", &b2);

    Complexo* num1 = criar_complexo(a1, b1);
    Complexo* num2 = criar_complexo(a2, b2);
    Complexo* resultado = criar_complexo(0, 0);

    printf("____________________________________________\n");
    printf("Escolha 1 operação:\n");
    printf("1) Soma\n");
    printf("2) Subtração\n");
    printf("3) Multiplicação\n");
    printf("4) Divisão\n");
    scanf("%i", &escolha);


    if (escolha == 1) {
        resultado = somar_complexos(num1, num2);
    } else if (escolha == 2) {
        resultado = subtrair_complexos(num1, num2);
    } else if (escolha == 3) {
        resultado = multiplicar_complexos(num1, num2);
    } else if (escolha == 4) {
        resultado = dividir_complexos(num1, num2);
    }
    else {
        printf("Não foi escolhida uma operação válida.");
        exit(1);
    }


    printf("O primeiro número complexo: %.2f %.2f i\n", a1, b1);
    printf("O segundo número complexo: %.2f %.2f i\n", a2, b2);

    printf("O resultado da operação que você escolheu é: \n");

    get_complexo(resultado, &ar, &br);

    printf("%.2f %.2f i", ar, br);

    liberar_complexo(num1);
    liberar_complexo(num2);
    liberar_complexo(resultado);

    return 0;
}
