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

using namespace std;

class Circulo: public Figura {
public:
    Circulo() = default;
    Circulo(const Circulo &circulo) {};
    Circulo(const string& nombre, const list<Punto>& puntos) : Figura(1, nombre, puntos) {};
    Circulo(const Figura &figura): Figura(figura.getNumPuntos(), figura.getNombre(), figura.getPuntos()) {};
    ~Circulo() { };
    double calculaArea();
    double calculaPerimetro();
    void imprime();
};


#endif //EJERCICIOHERENCIA_CIRCULO_H
