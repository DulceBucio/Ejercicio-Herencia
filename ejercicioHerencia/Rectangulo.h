//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#ifndef EJERCICIOHERENCIA_RECTANGULO_H
#define EJERCICIOHERENCIA_RECTANGULO_H
#include <iostream>
#include "Figura.h"
using namespace std;

class Rectangulo:public Figura{
public:
    Rectangulo() = default;
    Rectangulo(const Rectangulo &rectangulo) {};
    ~Rectangulo();
    void calculaArea();
    void calculaPerimetro();
    void imprimeRectangulo();
};


#endif //EJERCICIOHERENCIA_RECTANGULO_H
