//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include <iostream>
#include "Punto.h"
#include "Figura.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"
using namespace std;

int main() {
    Punto p1(0.0,0.0);
    Punto p2(1.0, 2.0);
    Punto p3(2.0, 0.0);
    list<Punto> puntosTriangulo {p1,p2,p3};
    Figura figuraTriangulo(3, "triangulo", puntosTriangulo);
    Triangulo triangulo(figuraTriangulo);
    triangulo.imprime();

    Punto p4(2.0,2.0);
    Punto p5(0.0, 2.0);
    list<Punto> puntosRectangulo{p1,p3,p4,p5};
    Figura figuraRectangulo(3, "rectangulo", puntosRectangulo);
    Rectangulo rectangulo(figuraRectangulo);
    rectangulo.imprimeRectangulo();

    Punto p6(1.0, 0.0);
    list<Punto> puntosCirculo{p6};
    Figura figuraCirculo(1, "circulo", puntosCirculo);
    Circulo circulo(figuraCirculo);
    circulo.imprime();

    return 0;
}
