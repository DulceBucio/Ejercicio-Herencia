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

// Clase Rectángulo, hereda de la clase Figura y representa un objeto de tipo rectángulo.
// Tiene constructores que permiten crear instancias de rectángulo de diferentes formas
class Rectangulo:public Figura{
public:
    // Constructores
    Rectangulo() = default;
    Rectangulo(const Rectangulo &rectangulo) {};
    Rectangulo(const string& nombre, const list<Punto>& puntos) : Figura(4, nombre, puntos) {};
    // Constructor con un objeto tipo figura
    Rectangulo(const Figura &figura): Figura(figura.getNumPuntos(), figura.getNombre(), figura.getPuntos()) {};
    // Destructor
    ~Rectangulo() { };
    // Métodos para obtener valores de importancia de nuestro rectángulo
    double calculaArea();
    double calculaPerimetro();
    void imprimeRectangulo();
};


#endif //EJERCICIOHERENCIA_RECTANGULO_H
