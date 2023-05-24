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

// Clase Triangulo, hereda de la clase Figura los puntos necesarios y representa un objeto de tipo triángulo.
// Tiene constructores que permiten crear instancias de triángulos de diferentes formas
class Triangulo: public Figura{

public:
    // Constructores
    Triangulo() = default;
    Triangulo(const Triangulo &triangulo) {};
    Triangulo(const string& nombre, const list<Punto>& puntos) : Figura(3, nombre, puntos) {};
    // Constructor con un objeto tipo figura
    Triangulo(const Figura &figura): Figura(figura.getNumPuntos(), figura.getNombre(), figura.getPuntos()) {};
    // Destructor
    ~Triangulo() { };
    // Métodos para obtener valores de importancia de nuestro triángulo
    double calculaArea();
    double calculaPerimetro();
    void imprime();
};

#endif //EJERCICIOHERENCIA_TRIANGULO_H
