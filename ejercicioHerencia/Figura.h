//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include <iostream>
#include <list>
#include "Punto.h"
using namespace std;
#ifndef EJERCICIOHERENCIA_FIGURA_H
#define EJERCICIOHERENCIA_FIGURA_H


class Figura {
    int numPuntos;
    string nombre;
    list<Punto> puntos;
public:
    Figura() = default;

    Figura(const int &numPuntos, const string &nombre, const list<Punto> &puntos) : numPuntos(numPuntos),
                                                                                    nombre(nombre), puntos(puntos) {};

    Figura(const Figura &figuraCopia) : numPuntos(figuraCopia.numPuntos), nombre(figuraCopia.nombre),
                                        puntos(figuraCopia.puntos) {};

    ~Figura() {};

    int getNumPuntos() const { return numPuntos; }
    string getNombre() const { return nombre; }
    list<Punto> getPuntos() const { return puntos; }

    void setNumPuntos(const int &numPuntos) { this->numPuntos = numPuntos; }
    void setNombre(const string &nombre) { this->nombre = nombre; }
    void setPuntos(const list<Punto> &puntos) { this->puntos = puntos; }
    void imprimeFigura() const;
};


#endif //EJERCICIOHERENCIA_FIGURA_H