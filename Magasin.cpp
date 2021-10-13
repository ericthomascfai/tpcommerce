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

void Magasin::interaction() {
    int saisie=0;
    cout<<"1-opération Produit \n";
    cout<<"2-opération Livre \n";
    cout<<"3-opération CD \n";
    cout<<"4-Afficher un bilan\n";
    cin>>saisie;
    switch(saisie)
    {
        case 1:
            this->submenu("produit");
            break;

        case 2:

            this->submenu("livre");
            break;
        case 3:

            this->submenu("cd");
            break;
        case 4:
            this->bilan();
            break;
    }
    interaction();
}

void Magasin::submenu(const string &type) {

    int saisie=0;
    cout<<"1-Vendre un "<<type<<endl;
    cout<<"2-Acheter un "<<type<<endl;
    cout<<"3-Afficher la description d'un "<<type<<endl;
    cout<<"4-Ajouter un "<<type<<endl;
    cout<<"5-Editer la description"<<endl;
    cout<<"6-Retour au menu principal"<<endl;
    cin>>saisie;
    switch(saisie) {
        case 1:
            vendreProduit(this->choixproduit(type), this->choixqte());
            break; //break case

        case 2:
            acheterProduit(this->choixproduit(type), this->choixqte());
            break;
        case 3:
            stock[choixproduit(type)].afficherDescription();
            break;
        case 4:
            if (type == "produit") {


                this->ajouterProduit(this->saisieinformation("nom"), this->saisieprix("achat"),
                                     this->saisieprix("vente"));

            }
            else if (type == "livre") {

                this->ajouterLivre(saisieinformation("nom"), saisieprix("achat"), this->saisieprix("vente"),
                                   this->saisieinformation("editeur"), this->saisieinformation("auteur"));


            } else {

                this->ajouterCD(saisieinformation("nom"), saisieprix("achat"), this->saisieprix("vente"),
                                this->saisieinformation("auteur"), this->saisieinformation("editeur"),
                                this->saisielistetitre());


            }
            break;
        case 5:
            stock[choixproduit(type)].editerProduit(this->saisieinformation("nouvelle description"));
            break;

        case 6:
            interaction();

    }
    submenu(type);
}
int Magasin::choixproduit(const string &type) {
    int saisie=0;
    cin.ignore(256,'\n'); //ignore ce qui q été précedemment saisi
    cout<<"Veuillez donner le numéro du "<<type<<endl;
    cin>>saisie;
    return saisie;
}

int Magasin::choixqte() {
    int saisie=0;
    cin.ignore(256,'\n'); //ignore ce qui q été précedemment saisi
    cout<<"Quelle quantité"<<endl;
    cin>>saisie;
    return saisie;
}

const string Magasin::saisieinformation(const string &type) {
    string saisie="";
    cout<<"Veuillez saisir l'information pour "<<type<<endl;
    cin>>saisie;
    return saisie;
}

float Magasin::saisieprix(const string &type)
{
    float prix=0;
    cin.ignore(256,'\n'); //ignore ce qui q été précedemment saisi
    cout << "Veuillez saisir prix " << type << "\n";
    cin >> prix;
    return prix;
}

vector<string> Magasin::saisielistetitre() {
    vector<string> listetitres;
    string saisie="";
    int i=0;
    while(saisie!="F")
    {
        cout<<"Veuillez saisir un titre ou (F) pour fin"<<endl;
        cin>>saisie;
        listetitres.push_back(saisie);
    }
    return listetitres;
}




