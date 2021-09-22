#include <stdio.h>
#include "ListaEncadeada.h"


void adicionar_elementos(ListaEncadeada* lista) {
    adicionar_inicio(20, lista);
    adicionar_inicio(15, lista);
    adicionar_inicio(10, lista);
    adicionar_inicio(5, lista);

    adicionar_fim(25, lista);
    adicionar_fim(30, lista);
    adicionar_fim(35, lista);
    adicionar_fim(40, lista);

    adicionar_por_chave(5, 1, lista);
    adicionar_por_chave(20, 21, lista);
    adicionar_por_chave(40, 41, lista);
    adicionar_por_chave(29, 41, lista);
}


void remover_elementos(ListaEncadeada* lista) {
    deletar_inicio(lista);
    deletar_fim(lista);

    deletar_por_chave(21, lista);
}


int main() {
    ListaEncadeada* lista = criar_lista();
    adicionar_elementos(lista);

    exibir_elementos(lista);

    remover_elementos(lista);

    exibir_elementos(lista);

    liberar_lista(lista);
    printf("Hello, World!\n");
    return 0;
}
