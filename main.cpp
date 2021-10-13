#include <iostream>
#include "Produit.h"
#include "Magasin.h"
#include "Livre.h"
#include "Cd.h"

int main() {
    /*Produit p=Produit("ajax",1,2);
    p.afficherDescription();
    p.editerProduit("Monsieur propre");
    p.afficherDescription();
    p.augmenterQuantité(1);
    cout<<p.getNbexemplaires()<<endl;
    p.diminuerQuantité(1);
    cout<<p.getNbexemplaires()<<endl;*/
    /*Magasin m=Magasin();
    m.ajouterProduit("Mir",1,4);
    m.bilan();
    m.acheterProduit(0,2);
    m.bilan();
    cout<<m.getSolde()<<endl;
    m.vendreProduit(0,1);
    m.bilan();
    cout<<m.getSolde()<<endl;*/
    /*Livre l=Livre("Livre de la jungle",2,4,"Phil","Disney");
    l.afficherDescription();
    vector<string> liste;
    liste.push_back("titre1");
    liste.push_back("titre2");
    Cd moncd=Cd("album1",2,5,"auteur1","interprete1",liste);
    moncd.afficherDescription();*/
    /*vector<string> liste;
    liste.push_back("titre1");
    liste.push_back("titre2");
    Magasin m=Magasin();
    m.ajouterCD("album1",2,5,"auteur1","interprete1",liste);
    m.ajouterLivre("Livre de la jungle",2,4,"Phil","Disney");
    m.bilan();*/
    Magasin m=Magasin();
    m.interaction();
    return 0;
}
