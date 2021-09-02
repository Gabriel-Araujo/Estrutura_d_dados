//
// Created by Gabriel on 02/09/2021.
//

#include <stdlib.h>

#include "circulo.h"

#define PI 3.14159

struct circulo {
    Ponto* p;
    float r;
};


Circulo* criar_circulo(float x, float y, float r) {
    Circulo* c = (Circulo*) malloc(sizeof(Circulo));

    c->p = criar_ponto(x, y);
    c->r = r;

    return c;
}


void liberar_circulo(Circulo* c) {
    free(c);
}


float area_da_circunferencia(Circulo* c) {
    return PI * c->r * c->r;
}


int esta_no_interior(Circulo* c, Ponto* p) {
    float d = distancia_entre_pontos(c->p, p);
    return (d < c->r);
}