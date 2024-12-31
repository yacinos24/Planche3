#include <iostream>
#include <vector>
using namespace std;

//Remplissage vecteur
void remplirVecteur(vector<int>& vect, const string& nom) {
    int i=0;
    for (int x:vect) {
        cout << "Entrez la valeur " << nom << "[" << i << "]: ";
        cin >>x;
        i++;
    }
}

//Calculer du produit scalaire
int produitScalaire(const vector<int>& U, const vector<int>& V,const int taille) {
    int produit = 0;

    for (int i=0;i<taille;i++ ) {
        produit += U[i] * V[i];
    }
    return produit;
}

int main() {
    int taille;
    cout<<"Entrez la dimension des vecteurs: ";
    cin>>taille;

    while(taille<0){
        cout<<"La dimension doit être un entier positif!"<<endl;
        cout<<"Entrez la dimension des vecteurs: ";
        cin>>taille;
    }
    vector<int> U(taille), V(taille);

    cout<<"Remplissage du vecteur U:"<<endl;
    remplirVecteur(U, "U");

    cout<<"Remplissage du vecteur V:"<<endl;
    remplirVecteur(V, "V");

    int resultat = produitScalaire(U, V,taille);
    cout<<"Le produit scalaire de U et V est: "<<resultat<<endl;

    return 0;
}
