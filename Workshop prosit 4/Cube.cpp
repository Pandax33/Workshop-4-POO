//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include "Cube.h"

Cube::Cube() : Rectangle() {
}

Cube::Cube(int cote) : Rectangle(cote,0){

}

int Cube::getCote(){
    return this->dim1;
}
int Cube::getPerimetre() {
    int resultat;
    resultat = this->getCote()*4;
    return resultat;
}

int Cube::getAire() {
    int resultat;
    resultat = this->getCote() * this->getCote();
    return resultat;
}

string Cube::afficheInfo() {
    string message;
    message = "La cote est de : " + to_string(this-> getCote());
    message +=  "m, le perimetre est de : " + to_string(this->getPerimetre());
    message += "m, l'aire est de : " + to_string(this->getAire());
    message += "m2";
    return message;
}