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
using namespace std;

int main() {
    Punto p1(0.0,0.0);
    Punto p2(1.0, 2.0);
    Punto p3(2.0, 0.0);
    list<Punto> points {p1,p2,p3};
    Figura figura(3, "triangulo", points);
    Triangulo triangulo(figura);


    return 0;
}
