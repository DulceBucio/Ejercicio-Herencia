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
    // Constructores
    Punto(): x(0.0), y (0.0) {}
    Punto(const Punto &puntoCopy): x(puntoCopy.x), y(puntoCopy.y) { };
    Punto(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}
    Punto(double xyCoord) : x(xyCoord), y(xyCoord) {}
    // Setters y Getters
    const double& getX() const { return x; }
    const double& getY() const { return y; }
    void setX(const double &x) { this->x = x; }
    void setY(const double &y) { this->y = y; }
    // Método
    void imprimePunto() const;
};

#endif //EJERCICIOHERENCIA_PUNTO_H
