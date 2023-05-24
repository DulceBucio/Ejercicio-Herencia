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
    Rectangulo(const string& nombre, const list<Punto>& puntos) : Figura(4, nombre, puntos) {};
    Rectangulo(const Figura &figura): Figura(figura.getNumPuntos(), figura.getNombre(), figura.getPuntos()) {};
    ~Rectangulo() { };
    double calculaArea();
    double calculaPerimetro();
    void imprimeRectangulo();
};


#endif //EJERCICIOHERENCIA_RECTANGULO_H
