//
// Created by eric on 11/10/2021.
//

#ifndef TPCOMMERCE_LIVRE_H
#define TPCOMMERCE_LIVRE_H


#include "Produit.h"

class Livre: public Produit {
private:
    string auteur;
    string editeur;
public:
    Livre(const string &nom,int prixachat,int prixvente, const string auteur,const string editeur);

    void afficherDescription() override;

    const string &getAuteur() const;

    const string &getEditeur() const;
};


#endif //TPCOMMERCE_LIVRE_H
