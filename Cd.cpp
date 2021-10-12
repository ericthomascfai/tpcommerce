//
// Created by eric on 12/10/2021.
//

#include <iostream>
#include "Cd.h"

Cd::Cd(const string &nom, const float prixachat, const float prixvente, const string &auteur, const string &interpretre,
       const vector<string> &listeTitre) : Produit(nom, prixachat, prixvente), auteur(auteur), interpretre(interpretre),
                                           liste_titre(listeTitre) {}

void Cd::afficherDescription() {
    Produit::afficherDescription();
    cout<<auteur<<endl;
    cout<<interpretre<<endl;
    for(string s:liste_titre)
    {
        cout<<s<<endl;
    }
}
