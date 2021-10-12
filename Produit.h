//
// Created by eric on 23/09/2021.
//

#ifndef TPCOMMERCE_PRODUIT_H
#define TPCOMMERCE_PRODUIT_H

#include <string>

using namespace std;

class Produit {
private:
    string nom;
    float prixachat;
    float prixvente;
    int nbexemplaires;
    string description;
public:
    Produit(const string &nom,const float prixachat,const float prixvente);
    virtual void afficherDescription();
    void editerProduit(const string &newdescription);
    void augmenterQuantité(const int qte);
    void diminuerQuantité(const int qte);

    const string &getNom() const;

    float getPrixachat() const;

    float getPrixvente() const;

    int getNbexemplaires() const;

     const string &getDescription() const;

    void setNbexemplaires(int nbexemplaires);


};


#endif //TPCOMMERCE_PRODUIT_H
