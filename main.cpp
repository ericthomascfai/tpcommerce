#include <iostream>
#include "Produit.h"
#include "Magasin.h"

int main() {
    /*Produit p=Produit("ajax",1,2);
    p.afficherDescription();
    p.editerProduit("Monsieur propre");
    p.afficherDescription();
    p.augmenterQuantité(1);
    cout<<p.getNbexemplaires()<<endl;
    p.diminuerQuantité(1);
    cout<<p.getNbexemplaires()<<endl;*/
    Magasin m=Magasin();
    m.ajouterProduit("Mir",1,4);
    m.bilan();
    m.acheterProduit(0,2);
    m.bilan();
    cout<<m.getSolde()<<endl;
    m.vendreProduit(0,1);
    m.bilan();
    cout<<m.getSolde()<<endl;

    return 0;
}
