//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include "Rectangle.h"
#ifndef WORKSHOP3_CUBE_H
#define WORKSHOP3_CUBE_H


class Cube : public Rectangle{
public:
    Cube();
    Cube(int tcote);
    int getCote();
    int getPerimetre();
    int getAire();
    string afficheInfo();

};


#endif //WORKSHOP3_CUBE_H
