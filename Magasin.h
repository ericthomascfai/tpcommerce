//
// Created by eric on 11/10/2021.
//

#ifndef TPCOMMERCE_MAGASIN_H
#define TPCOMMERCE_MAGASIN_H


#include "Produit.h"
#include <vector>
class Magasin {

private:
    float solde;
    vector<Produit> stock;

public:
    Magasin();
    void ajouterProduit(const string &nom, const float prixachat,const float prixvente);
    void ajouterCD(const string &nom, const float prixachat, const float prixvente, const string &auteur, const string &interpretre,
    const vector<string> &listeTitre);
    void ajouterLivre(const string &nom,int prixachat,int prixvente, const string auteur,const string editeur);
    void acheterProduit(const int reference,const int nombreexemplaires);
    void vendreProduit(const int reference,const int nombreexemplaires);
    void bilan();

    float getSolde() const;

    const vector<Produit> &getStock() const;

    vector<string> saisielistetitre();

    float saisieprix(const string &type);

    const string saisieinformation(const string &type);

    int choixproduit(const string &type);

    void interaction();

    void submenu(const string &type);

    int choixqte();
};


#endif //TPCOMMERCE_MAGASIN_H
