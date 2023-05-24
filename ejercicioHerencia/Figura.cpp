//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include "Figura.h"
#include "Punto.h"
#include <iostream>
#include <list>
#include <algorithm>


void Figura::imprimeFigura() const { // Comparador lambda, toma dos puntos 'p1' y 'p2' como parámetros y compara sus coordenadas x e y para determinar el orden
    // Si el valor de x de p1 es > que el de p2, se considera que p1 es menor y se coloca antes en la lista
    // Si el valor de x de p1 es = al de p2, se compara el valor de y. Si el valor de y de p1 es > que el de p2, se considera
    // que p1 es menor y se coloca antes en la lista. Si ambos criterios son falsos, entonces p2 es < y se coloca antes en la lista
    list<Punto> puntosOrdenados(puntos);
    puntosOrdenados.sort([](const Punto& p1, const Punto& p2) {
        return (p1.getX() > p2.getX()) || (p1.getX() == p2.getX() && p1.getY() > p2.getY());
    });

    cout << "Nombre: " << nombre << endl;
    cout << "Numero de puntos: " << numPuntos << endl;
    cout << "Puntos (ordenados descendentemente):" << endl;
    for (const auto& punto : puntosOrdenados) { // itera sobre los elementos de la lista y muestra las coordenadas de cada punto
        cout << "X: " << punto.getX() << ", Y: " << punto.getY() << endl;
    }
}
