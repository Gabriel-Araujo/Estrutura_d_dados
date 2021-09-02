//
// Created by Gabriel on 02/09/2021.
//

#ifndef TAD_PONTO_PONTO_H
#define TAD_PONTO_PONTO_H

typedef struct ponto Ponto;

Ponto* criar_ponto(float x, float y);
void liberar_ponto(Ponto* p);

void get_ponto(Ponto* p, float* x, float* y);
void set_ponto(Ponto* p, float x, float y);

float distancia_entre_pontos(Ponto* p1, Ponto* p2);

#endif //TAD_PONTO_PONTO_H
