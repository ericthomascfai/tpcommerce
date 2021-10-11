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
    void acheterProduit(const int reference,const int nombreexemplaires);
    void vendreProduit(const int reference,const int nombreexemplaires);
    void bilan();

    float getSolde() const;

    const vector<Produit> &getStock() const;


};


#endif //TPCOMMERCE_MAGASIN_H
