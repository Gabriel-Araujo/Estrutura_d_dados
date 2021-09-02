//
// Created by Gabriel on 02/09/2021.
//

#ifndef TAD_CIRCULO_CIRCULO_H
#define TAD_CIRCULO_CIRCULO_H

#include "ponto.h"

typedef struct circulo Circulo;

Circulo* criar_circulo(float x, float y, float r);
void liberar_circulo(Circulo* c);

float area_da_circunferencia(Circulo* c);
int esta_no_interior(Circulo* c, Ponto* p);

#endif //TAD_CIRCULO_CIRCULO_H
