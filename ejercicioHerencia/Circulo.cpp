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

double Circulo::calculaPerimetro() { // La función calcula el perímetro utilizando cualquier punto de la circunferencia
    // considerando que el centro de está en (0,0)
    list<Punto>::iterator it1 = getPuntos().begin(); // Obtiene un iterador al primer punto de la lista de puntos del círculo
    Punto primerPunto = *it1;

    // Obtiene las coordenadas X, Y del primer punto
    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();

    // Cálculos del radio, diámetro y perímetro
    double radio = sqrt(pow(primerPuntoX-0,2) + pow(primerPuntoY-0,2));
    double diametro = 2*radio;
    double perimetro = M_PI*diametro;

    return perimetro;
}

double Circulo::calculaArea() { // La función calcula el área utilizando cualquier punto de la circunferencia
    // Obtiene el punto con un iterador
    list<Punto>::iterator it1 = getPuntos().begin();
    Punto primerPunto = *it1;

    double primerPuntoX = primerPunto.getX();
    double primerPuntoY = primerPunto.getY();

    // Cálculos del radio, diámetro y área
    double radio = sqrt(pow(primerPuntoX-0,2) + pow(primerPuntoY-0,2));
    double area = M_PI* pow(radio, 2);
    return area;
}

void Circulo::imprime() {
    imprimeFigura();
    cout << "Circulo" << "\n";
    cout << "Perimetro: " << calculaPerimetro() << "\n";
    cout << "Area: " << calculaArea() << "\n";
}