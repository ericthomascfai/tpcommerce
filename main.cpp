#include <iostream>
#include "Produit.h"

int main() {
    Produit p=Produit("ajax",1,2);
    p.afficherDescription();
    p.editerProduit("Monsieur propre");
    p.afficherDescription();
    p.augmenterQuantité(1);
    cout<<p.getNbexemplaires()<<endl;
    p.diminuerQuantité(1);
    cout<<p.getNbexemplaires()<<endl;
    return 0;
}
