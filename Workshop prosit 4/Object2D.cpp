//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//

#include "Object2D.h"

Object2D::Object2D(){
    this->dim1 = 10;
    this->dim2=10;
}
Object2D::Object2D(int tdim1, int tdim2) {
    this->dim1=tdim1;
    this->dim2=tdim2;
}

int Object2D::getPerimetre() {
    return 0;
}
int Object2D::getAire() {
    return 0;
}

string Object2D::afficheInfo() {
    string message;
    message = "Le perimetre est de : " + to_string(this->getPerimetre());
    message += " l'air est de : " + to_string(this->getAire());
    return message;
}

void Object2D::setSuivant(Object2D *oui) {
    this->suivant=oui;
}

Object2D *Object2D::getSuivant() {
    return this->suivant;
}

