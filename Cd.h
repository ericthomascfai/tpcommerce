//
// Created by eric on 12/10/2021.
//

#ifndef TPCOMMERCE_CD_H
#define TPCOMMERCE_CD_H


#include "Produit.h"
#include "vector"
class Cd: public Produit {
private:
    string auteur;
    string interpretre;
    vector<string> liste_titre;
public:
    Cd(const string &nom, const float prixachat, const float prixvente, const string &auteur, const string &interpretre,
       const vector<string> &listeTitre);

    void afficherDescription() override;


};


#endif //TPCOMMERCE_CD_H
