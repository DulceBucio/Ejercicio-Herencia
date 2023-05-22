//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#ifndef EJERCICIOHERENCIA_PUNTO_H
#define EJERCICIOHERENCIA_PUNTO_H
#include <iostream>
using  namespace std;


class Punto {
    double x, y;
public:
    Punto() = default;
    Punto(const Punto &puntoCopy): x(puntoCopy.x), y(puntoCopy.y) { };
    Punto(double,double);
    Punto(const double &, const double &);


    const double &getX() {return x;}
    const double &getY() {return y;}
    void setX(const double &x) { this->x = x; }
    void setY(const double &y) { this->y = y; }

    void imprimePunto();
};

#endif //EJERCICIOHERENCIA_PUNTO_H
