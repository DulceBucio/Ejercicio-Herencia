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

// Clase Circulo, hereda de la clase Figura y representa un objeto de tipo círculo.
// Tiene constructores que permiten crear instancias de círculos de diferentes formas
class Circulo: public Figura {
public:
    // Constructores
    Circulo() = default;
    Circulo(const Circulo &circulo) {};
    Circulo(const string& nombre, const list<Punto>& puntos) : Figura(1, nombre, puntos) {};
    // Constructor desde un objeto tipo figura.
    Circulo(const Figura &figura): Figura(figura.getNumPuntos(), figura.getNombre(), figura.getPuntos()) {};
    // Destructor
    ~Circulo() { };
    // Métodos
    double calculaArea();
    double calculaPerimetro();
    void imprime();
};


#endif //EJERCICIOHERENCIA_CIRCULO_H
