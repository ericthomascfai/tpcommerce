//
// Created by eric on 11/10/2021.
//

#include <iostream>
#include "Livre.h"

Livre::Livre(const string &nom, int prixachat, int prixvente, const string auteur, const string editeur): Produit(nom,prixachat,prixvente),auteur(auteur),editeur(editeur) {

}

const string &Livre::getAuteur() const {
    return auteur;
}

const string &Livre::getEditeur() const {
    return editeur;
}

void Livre::afficherDescription() {
    Produit::afficherDescription();
    cout<<" "<<auteur<<" "<<editeur;
}


