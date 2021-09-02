//
// Created by Gabriel on 02/09/2021.
//
#include <stdlib.h>

#include "complexos.h"

struct complexo {
    double a;
    double b;
};


Complexo* criar_complexo(double a, double b) {
    Complexo* comp = (Complexo*) malloc(sizeof(Complexo));

    comp->a = a;
    comp->b = b;

    return comp;
}


void liberar_complexo(Complexo* comp) {
free(comp);
}


void get_complexo(Complexo* comp, double* a, double* b) {
    *a = comp->a;
    *b = comp->b;
}


void set_complexo(Complexo* comp, double a, double b) {
    comp->a = a;
    comp->b = b;
}


Complexo* somar_complexos(Complexo* comp1, Complexo* comp2) {
    Complexo* comp_return = (Complexo*) malloc(sizeof(Complexo));

    comp_return->a = comp1->a + comp2->a;
    comp_return->b = comp1->b + comp2->b;

    return comp_return;
}


Complexo* subtrair_complexos(Complexo* comp1, Complexo* comp2) {
    Complexo* comp_return = (Complexo*) malloc(sizeof(Complexo));

    comp_return->a = comp1->a - comp2->a;
    comp_return->b = comp1->b - comp2->b;

    return comp_return;
}


Complexo* multiplicar_complexos(Complexo* comp1, Complexo* comp2) {
    Complexo* comp_return = (Complexo*) malloc(sizeof(Complexo));

    comp_return->a = (comp1->a * comp2->a) - (comp1->b * comp2->b);
    comp_return->b = (comp1->b * comp2->a) - (comp1->a * comp2->b);

    return comp_return;
}


Complexo* dividir_complexos(Complexo* comp1, Complexo* comp2) {
    Complexo* comp_return = (Complexo*) malloc(sizeof(Complexo));

    comp_return->a = ((comp1->a * comp2->a) + (comp1->b * comp2->b)) / ((comp2->a * comp2->a) + (comp2->b * comp2->b));
    comp_return->b = ((comp1->b * comp2->a) - (comp1->a * comp2->b)) / ((comp2->a * comp2->a) + (comp2->b * comp2->b));

    return comp_return;
}