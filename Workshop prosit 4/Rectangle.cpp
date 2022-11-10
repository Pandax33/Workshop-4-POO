//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//

#include "Rectangle.h"

Rectangle::Rectangle() : Object2D() {
}

Rectangle::Rectangle(int tdim1, int tdim2) : Object2D(tdim1,tdim2){

}

int Rectangle::getLongueur() {
    return this->dim1;
}

int Rectangle::getLargeur() {
    return this->dim2;
}

int Rectangle::getPerimetre() {
    int resultat = this->dim1*2 + this->dim2*2;
    return resultat;
}

int Rectangle::getAire() {
    int resultat = this->dim1*this->dim2;
    return resultat;
}

string Rectangle::afficheInfo() {
    string message;
    message = "La longueur est de : " + to_string(this-> getLongueur());
    message += "metre ,la longueur est de : " + to_string(this->getLargeur());
    message += "metre, le perimetre est de : " + to_string(this->getPerimetre());
    message += "metre, l'aire est de : " + to_string(this->getAire());
    message += "metre carré";
    return message;
}