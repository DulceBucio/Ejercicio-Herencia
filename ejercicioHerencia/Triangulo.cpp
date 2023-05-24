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


double Triangulo::calculaPerimetro() {

}

double Triangulo::calculaArea(){

}

void Triangulo::imprime(){
    imprimeFigura();
    cout << "Triángulo" << "\n";
    cout << "Perímetro: " << calculaPerimetro() << "\n";
    cout << "Área: " << calculaArea() << "\n";
}