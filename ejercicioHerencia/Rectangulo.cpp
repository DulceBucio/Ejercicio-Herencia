//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//

#include <iostream>
#include "Rectangulo.h"
using namespace std;

double Rectangulo::calculaPerimetro() { // La función utiliza los puntos del rectángulo para calcular su base y altura.
    // Luego, el perímetro del rectángulo se calcula sumando dos veces la base y dos veces la altura.
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
    double segundoPuntoX = segundoPunto.getX();
    double segundoPuntoY = segundoPunto.getY();
    double tercerPuntoY = tercerPunto.getY();

    double base = segundoPuntoX - primerPuntoX;
    double altura = tercerPuntoY - segundoPuntoY;

    return 2 * (base + altura) ;
}

double Rectangulo::calculaArea() { // La función calcula el área utilizando los puntos que definen los vértices del rectángulo.
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
    double segundoPuntoX = segundoPunto.getX();
    double segundoPuntoY = segundoPunto.getY();
    double tercerPuntoY = tercerPunto.getY();

    double base = segundoPuntoX - primerPuntoX;
    double altura = tercerPuntoY - segundoPuntoY;

    return base * altura;
}

void Rectangulo::imprimeRectangulo() {
    imprimeFigura();
    cout << "Rectangulo" << "\n";
    cout << "Perimetro: " << calculaPerimetro() << "\n";
    cout << "Area: " << calculaArea() << "\n";
}