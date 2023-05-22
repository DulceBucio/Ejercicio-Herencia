//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include <iostream>
#include "Figura.h"
using namespace std;
#ifndef EJERCICIOHERENCIA_TRIANGULO_H
#define EJERCICIOHERENCIA_TRIANGULO_H

class Triangulo:public Figura{
public:
    Triangulo() = default;
    Triangulo(const Triangulo &triangulo) {};
    ~Triangulo();
    void calculaArea();
    void calculaPerimetro();
    void imprime();
};


#endif //EJERCICIOHERENCIA_TRIANGULO_H
