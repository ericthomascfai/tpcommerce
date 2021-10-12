//
// Created by eric on 11/10/2021.
//

#include <iostream>
#include "Magasin.h"
#include "Cd.h"
#include "Livre.h"

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
void Magasin::ajouterCD(const string &nom, const float prixachat, const float prixvente, const string &auteur,
                        const string &interpretre, const vector<string> &listeTitre) {
stock.push_back(Cd(nom,prixachat,prixvente,auteur,interpretre,listeTitre));
}
void Magasin::ajouterLivre(const string &nom, int prixachat, int prixvente, const string auteur, const string editeur) {
stock.push_back(Livre(nom,prixachat,prixvente,auteur,editeur));
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




