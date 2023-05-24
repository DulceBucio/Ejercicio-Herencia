//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include <iostream>
#include <cmath>
#include "Figura.h"
#include "Triangulo.h"
using namespace std;


double Triangulo::calculaPerimetro() { // La función utiliza los puntos del triángulo para calcular las longitudes
    // de cada uno de sus lados utilizando la fórmula de la distancia entre dos puntos en un plano
    list<Punto>::iterator it1 = puntos.begin();
    Punto primerPunto = *it1;

    // Acceder al segundo punto de la lista utilizando otro iterador
    list<Punto>::iterator it2 = puntos.begin();
    advance(it2, 1); // Avanzar al segundo elemento (índice 1)
    Punto segundoPunto = *it2;

    // Acceder al tercer punto de la lista utilizando un tercer iterador
    list<Punto>::iterator it3 = puntos.begin();
    advance(it3, 2); // Avanzar al tercer elemento (índice 2)
    Punto tercerPunto = *it3;

    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();
    double segundoPuntoX = segundoPunto.getX();
    double segundoPuntoY = segundoPunto.getY();
    double tercerPuntoX = tercerPunto.getX();
    double tercerPuntoY = tercerPunto.getY();

    double lado1 = sqrt(pow(segundoPuntoX-primerPuntoX,2) + pow(segundoPuntoY-primerPuntoY,2));
    double lado2 = sqrt(pow(tercerPuntoX-primerPuntoX,2) + pow(tercerPuntoY-primerPuntoY,2));
    double lado3 = sqrt(pow(tercerPuntoX-segundoPuntoX,2) + pow(tercerPuntoY-segundoPuntoY,2));

    cout << lado2;
    return lado1 + lado2 + lado3;
}

double Triangulo::calculaArea(){ // La función utiliza los puntos del triángulo para calcular su área utilizando la fórmula de la mitad del producto cruzado de dos vectores.
    // La fórmula tiene en cuenta las coordenadas x e y de los puntos para realizar el cálculo.

    list<Punto>::iterator it1 = puntos.begin();
    Punto primerPunto = *it1;

    // Acceder al segundo punto de la lista utilizando otro iterador
    list<Punto>::iterator it2 = puntos.begin();
    advance(it2, 1); // Avanzar al segundo elemento (índice 1)
    Punto segundoPunto = *it2;

    // Acceder al tercer punto de la lista utilizando un tercer iterador
    list<Punto>::iterator it3 = puntos.begin();
    advance(it3, 2); // Avanzar al tercer elemento (índice 2)
    Punto tercerPunto = *it3;

    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();
    double segundoPuntoX = segundoPunto.getX();
    double segundoPuntoY = segundoPunto.getY();
    double tercerPuntoX = tercerPunto.getX();
    double tercerPuntoY = tercerPunto.getY();

    double area = (primerPuntoX*(tercerPuntoY-segundoPuntoY) + segundoPuntoX*(primerPuntoY-tercerPuntoY) + tercerPuntoX*(segundoPuntoY-primerPuntoY))/2;
    return area;
}

void Triangulo::imprime(){
    imprimeFigura();
    cout << "Triangulo" << "\n";
    cout << "Perimetro: " << calculaPerimetro() << "\n";
    cout << "Area: " << calculaArea() << "\n";
}