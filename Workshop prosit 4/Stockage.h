//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//
#include "Cube.h"
#ifndef WORKSHOP3_STOCKAGE_H
#define WORKSHOP3_STOCKAGE_H


class Stockage {
private:
    Object2D* head;
    Object2D* tail;
    int taille;
public:
    Stockage();
    Stockage(Object2D*,Object2D*);
    void ajouterIndex(Object2D*,int);
    void afficherInfo();
    void ajouterHead(Object2D*);
    void ajouterTail(Object2D*);
    Object2D* retrouveIndex(int);
    void supprimerHead();
    void supprimerTail();
    void supprimerIndex(int);
    int retrouveObject(Object2D*);
};


#endif //WORKSHOP3_STOCKAGE_H