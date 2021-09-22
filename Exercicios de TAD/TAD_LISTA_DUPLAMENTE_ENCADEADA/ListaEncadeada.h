//
// Created by Gabriel on 22/09/2021.
//

#ifndef TAD_LISTA_DUPLAMENTE_ENCADEADA_LISTAENCADEADA_H
#define TAD_LISTA_DUPLAMENTE_ENCADEADA_LISTAENCADEADA_H

#include <stdlib.h>
#include <stdio.h>

typedef struct lista_encadeada ListaEncadeada;

typedef struct no No;

ListaEncadeada* criar_lista();
void liberar_lista(ListaEncadeada* lista);

int adicionar_inicio(double valor, ListaEncadeada* lista);
int adicionar_fim(double valor, ListaEncadeada* lista);
int adicionar_por_chave(double chave, double valor, ListaEncadeada* lista);

int deletar_inicio(ListaEncadeada* lista);
int deletar_fim(ListaEncadeada* lista);
int deletar_por_chave(double chave, ListaEncadeada* lista);

int buscar_elemento(double chave, No **posicao, ListaEncadeada* lista);
void exibir_elementos(ListaEncadeada* lista);

#endif //TAD_LISTA_DUPLAMENTE_ENCADEADA_LISTAENCADEADA_H
