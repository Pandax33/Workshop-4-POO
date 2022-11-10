//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include "Object2D.h"
#ifndef WORKSHOP3_RECTANGLE_H
#define WORKSHOP3_RECTANGLE_H


class Rectangle : public Object2D{
public:
    Rectangle();
    Rectangle(int tdim1,int tdim2);
    int getLongueur();
    int getLargeur();
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
};
#endif //WORKSHOP3_RECTANGLE_H