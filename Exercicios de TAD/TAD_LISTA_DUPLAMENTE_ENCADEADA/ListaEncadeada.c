//
// Created by Gabriel on 22/09/2021.
//

#include "ListaEncadeada.h"

struct no {
    double conteudo;
    No* anterior;
    No* proximo;
};


struct lista_encadeada {
    No* cabeca;
};


No* criar_no(double valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->conteudo = valor;
    novo->anterior = NULL;
    novo->proximo = NULL;

    return novo;
}


ListaEncadeada* criar_lista() {
    ListaEncadeada* nova = (ListaEncadeada*) malloc(sizeof(ListaEncadeada));

    nova->cabeca = NULL;

    return nova;
}


void liberar_lista(ListaEncadeada* lista) {
    No* posicao = lista->cabeca;

    while (posicao != NULL) {
        No* aux = posicao->proximo;
        free(posicao);
        posicao = aux;
    }

    free(lista);
}


int adicionar_inicio(double valor, ListaEncadeada* lista) {
    if (lista == NULL) return 0;

    No* novo = criar_no(valor);

    if (lista->cabeca != NULL) {
        lista->cabeca->anterior = novo;
    }
    novo->proximo = lista->cabeca;
    lista->cabeca = novo;
    return 1;
}


int adicionar_fim(double valor, ListaEncadeada* lista) {
    if (lista == NULL) return 0;

    No* novo = criar_no(valor);

    for (No* posicao = lista->cabeca; posicao != NULL; posicao = posicao->proximo) {
        if (posicao-> proximo == NULL) {
            posicao->proximo = novo;
            novo->anterior = posicao;
            return 1;
        }
    }
    return 0;
}


int adicionar_por_chave(double chave, double valor, ListaEncadeada* lista) {
    if (lista == NULL) return 0;

    No* posicao = NULL;

    int resultado = buscar_elemento(chave, &posicao, lista);

    if (!resultado) return 0;

    No* novo = criar_no(valor);

    if (posicao->anterior == NULL) {
        lista->cabeca = novo;
        novo->proximo = posicao;
        posicao->anterior = novo;
    }
    else if (posicao->proximo == NULL) {
        posicao->proximo = novo;
        novo->anterior = posicao;
    }
    else {
        novo->proximo = posicao->proximo;
        novo->anterior = posicao;
        posicao->proximo->anterior = novo;
        posicao->proximo = novo;
    }

    return 1;
}


int deletar_inicio(ListaEncadeada* lista) {
    if (lista == NULL || lista->cabeca == NULL) return 0;

    No* aux = lista->cabeca;

    lista->cabeca = aux->proximo;
    lista->cabeca->anterior = NULL;

    free(aux);

    return 1;
}


int deletar_fim(ListaEncadeada* lista) {
    if (lista == NULL || lista->cabeca == NULL) return 0;

    for (No* posicao = lista->cabeca; posicao != NULL; posicao = posicao->proximo) {
        if (posicao->proximo == NULL) {
            posicao->anterior->proximo = NULL;
            free(posicao);
            return 1;
        }
    }
    return 0;
}


int deletar_por_chave(double chave, ListaEncadeada* lista) {
    if (lista == NULL || lista->cabeca == NULL) return 0;
    No* posicao = NULL;

    int resultado = buscar_elemento(chave, &posicao, lista);

    if (!resultado) return 0;

    if (posicao->proximo == NULL){
        posicao->anterior->proximo = NULL;
    }
    else if (posicao->anterior == NULL) {
        lista->cabeca = posicao->proximo;
        posicao->proximo->anterior = NULL;
    }
    else {
    posicao->anterior->proximo = posicao->proximo;
    posicao->proximo->anterior = posicao->anterior;

    }

    free(posicao);

    return 1;
}


int buscar_elemento(double chave, No** posicao, ListaEncadeada *lista) {
    if (lista == NULL || lista->cabeca == NULL) return 0;

    for (No* aux = lista->cabeca; aux; aux = aux->proximo) {
        if (aux->conteudo == chave) {
            *posicao = aux;
            return 1;
        }
    }
    return 0;
}


void exibir_elementos(ListaEncadeada* lista) {
    int quantidade = 0;

    printf("Exibindo elementos da lista duplamente encadeada:\n");

    for (No* posicao = lista->cabeca; posicao != NULL; posicao = posicao->proximo) {
        printf("Elemento na posicao [%i] = %.2lf \n", quantidade, posicao->conteudo);
        quantidade++;
    }

    printf("A lista exibida tem %i elementos.\n", quantidade);
}
