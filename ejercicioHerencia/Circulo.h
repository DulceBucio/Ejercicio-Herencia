//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//
#include <iostream>
#include "Figura.h"
#ifndef EJERCICIOHERENCIA_CIRCULO_H
#define EJERCICIOHERENCIA_CIRCULO_H


class Circulo: public Figura {
public:
    Circulo() = default;
    Circulo(const Circulo &circulo): {};
    ~Circulo();
    void calculaArea();
    void calculaPerimetro();
    void imprime();
};


#endif //EJERCICIOHERENCIA_CIRCULO_H
