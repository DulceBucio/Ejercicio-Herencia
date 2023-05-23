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


double Triangulo::calculaPerimetro() const {
    return lado1 + lado2 + lado3;
}

double Triangulo::calculaArea() const {
    double s = calculaPerimetro() / 2;  // Semiperímetro
    return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));  // Fórmula de Herón
}

void Triangulo::imprime() const {
    Figura::imprime();
    cout << "Triángulo" << "\n";
    cout << "Lados: " << lado1 << ", " << lado2 << ", " << lado3 << "\n";
    cout << "Perímetro: " << calculaPerimetro() << "\n";
    cout << "Área: " << calculaArea() << endl;
}


//double Triangulo::calculaArea() const {

//}

//double Triangulo::calculaPerimetro() const {
    //
//}

//void Triangulo::imprime() const {
    //
//}