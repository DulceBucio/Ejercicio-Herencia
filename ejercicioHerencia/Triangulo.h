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
    Triangulo(const string& nombre, const list<Punto>& puntos) : Figura(3, nombre, puntos) {};
    virtual ~Triangulo();
    double calculaArea() const override;
    double calculaPerimetro() const override;
    void imprime() const override;
};


#endif //EJERCICIOHERENCIA_TRIANGULO_H
