//
// Created by
// Dulce Nahomi Bucio Rivas | A01425284
// Desirée Espinosa Contreras | A01425162
// 22/02/23
//


#include "Circulo.h"
#include <cmath>
#include <iostream>

using namespace std;

double Circulo::calculaPerimetro() { // La función calcula el perímetro utilizando el punto que define su centro
    list<Punto>::iterator it1 = getPuntos().begin();
    Punto primerPunto = *it1;

    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();

    double radio = sqrt(pow(primerPuntoX-0,2) + pow(primerPuntoY-0,2));
    double diametro = 2*radio;
    double perimetro = M_PI*diametro;

    return perimetro;
}

double Circulo::calculaArea() { // La función calcula el área utilizando el punto que define su centro
    list<Punto>::iterator it1 = getPuntos().begin();
    Punto primerPunto = *it1;

    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();

    double radio = sqrt(pow(primerPuntoX-0,2) + pow(primerPuntoY-0,2));
    double area = M_PI* pow(radio, 2);
    return area;
}

void Circulo::imprime() {
    imprimeFigura();
    cout << "Círculo" << "\n";
    cout << "Perímetro: " << calculaPerimetro() << "\n";
    cout << "Área: " << calculaArea() << "\n";
}