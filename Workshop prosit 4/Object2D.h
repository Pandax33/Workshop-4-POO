//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include <iostream>
#ifndef WORKSHOP3_OBJECT2D_H
#define WORKSHOP3_OBJECT2D_H
using namespace std;

class Object2D {
protected:
    int dim1;
    int dim2;
public:
    Object2D();
    Object2D(int tdim1,int tdim2);
    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
    Object2D* getSuivant();
    void setSuivant(Object2D*);

private:
    Object2D* suivant;
};


#endif //WORKSHOP3_OBJECT2D_H

