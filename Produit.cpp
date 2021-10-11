//
// Created by eric on 23/09/2021.
//

#include <iostream>
#include "Produit.h"
Produit::Produit(const string &nom, const float prixachat, const float prixvente):nom(nom),prixachat(prixachat),prixvente(prixvente) {
this->description="Pas de description";
this->nbexemplaires=0;
}

void Produit::afficherDescription() {
cout<<description<<endl;
}

void Produit::editerProduit(const string &newdescription) {
description=newdescription;
}

void Produit::augmenterQuantité(const int qte) {
nbexemplaires+=qte;
}

void Produit::diminuerQuantité(const int qte) {
nbexemplaires-=qte;
}
const string &Produit::getNom() const {
    return nom;
}

float Produit::getPrixachat() const {
    return prixachat;
}

float Produit::getPrixvente() const {
    return prixvente;
}

int Produit::getNbexemplaires() const {
    return nbexemplaires;
}

const string &Produit::getDescription() const {
    return description;
}

void Produit::setNbexemplaires(int nbexemplaires) {
    Produit::nbexemplaires = nbexemplaires;
}


