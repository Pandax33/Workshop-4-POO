//
// Created by Leandro De Barros Barbosa on 07/11/2022.
//

#include "Stockage.h"
Stockage::Stockage() {

}
Stockage::Stockage(Object2D* temp,Object2D* temp1) {
    this->head=temp;
    temp->setSuivant(temp1);
    this->tail=temp1;
    temp1->setSuivant(NULL);
}

void Stockage::ajouterHead(Object2D* oui) {
    oui->setSuivant(this->head);
    this->head=oui;

}

void Stockage::ajouterTail(Object2D* oui) {
    this->tail->setSuivant(oui);
    this->tail=oui;
    oui->setSuivant(NULL);

}

void Stockage::ajouterIndex(Object2D *Object, int index) {
    if(index > this->retrouveObject(this->tail)) {
        this->ajouterTail(Object);
    }
    else{
        Object2D* temp=this->retrouveIndex(index-1);
        Object2D* temp2=temp->getSuivant();
        temp->setSuivant(Object);
        Object->setSuivant(temp2);
    }
}

int Stockage::retrouveObject(Object2D* trouve) {
    Object2D* liste= this->head;
    int index1 =0;
    while(liste != trouve){
        liste=liste->getSuivant();
        index1= index1+1;
    }
    return index1;

}

Object2D *Stockage::retrouveIndex(int index) {
    Object2D* liste= this->head;
    int index1 =0;
    while(index1<index){
        liste=liste->getSuivant();
        index1= index1+1;
    }
    return liste;
}

void Stockage::supprimerHead() {
    Object2D* tempo=this->head;
    this->head=this->head->getSuivant();
    free(tempo);
}

void Stockage::supprimerTail() {
    Object2D* temp = this->tail;
    this->tail = this->retrouveIndex(this->retrouveObject(temp)-1);
    this->tail->setSuivant(NULL);
    free(temp);
}

void Stockage::supprimerIndex(int index) {
    Object2D* temp=this->retrouveIndex(index);
    this->retrouveIndex(index-1)->setSuivant(this->retrouveIndex(index+1));
    free(temp);
}