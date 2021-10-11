//
// Created by eric on 11/10/2021.
//

#include <iostream>
#include "Magasin.h"

float Magasin::getSolde() const {
    return solde;
}

const vector<Produit> &Magasin::getStock() const {
    return stock;
}

Magasin::Magasin() {
solde=0;
}

void Magasin::ajouterProduit(const string &nom, const float prixachat, const float prixvente) {
stock.push_back(Produit(nom,prixachat,prixvente));
}

void Magasin::acheterProduit(const int reference, const int nombreexemplaires) {
stock[reference].setNbexemplaires(stock[reference].getNbexemplaires()+nombreexemplaires);
solde=solde-stock[reference].getPrixachat()*nombreexemplaires;
}

void Magasin::vendreProduit(const int reference, const int nombreexemplaires) {
stock[reference].setNbexemplaires(stock[reference].getNbexemplaires()-nombreexemplaires);
solde=solde+stock[reference].getPrixvente()*nombreexemplaires;
}

void Magasin::bilan() {
    for(Produit p:stock)
    {
        cout<<p.getNom()<<" "<<p.getNbexemplaires()<<endl;
    }


}
