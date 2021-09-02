//
// Created by Gabriel on 02/09/2021.
//

#ifndef TAD_NUMEROS_COMPLEXOS_COMPLEXOS_H
#define TAD_NUMEROS_COMPLEXOS_COMPLEXOS_H

typedef struct complexo Complexo;

Complexo* criar_complexo(double a, double b);
void liberar_complexo(Complexo* comp);

void get_complexo(Complexo* comp, double* a, double* b);
void set_complexo(Complexo* comp, double a, double b);

Complexo* somar_complexos(Complexo* comp1, Complexo* comp2);
Complexo* subtrair_complexos(Complexo* comp1, Complexo* comp2);
Complexo* multiplicar_complexos(Complexo* comp1, Complexo* comp2);
Complexo* dividir_complexos(Complexo* comp1, Complexo* comp2);

#endif //TAD_NUMEROS_COMPLEXOS_COMPLEXOS_H
