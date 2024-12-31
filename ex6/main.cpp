#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

void remplirVecteur(vector<pair<string,int>>& vect) {
    for (int i=0; i<vect.size(); i++) {
        cout<<"Entrez le nom du livre "<<i+1<<": ";
        cin>>vect[i].first;
        cout<<"Entrez le nombre de pages de "<<vect[i].first<<": ";
        cin>>vect[i].second;
    }
}

void afficherVecteur(const vector<pair<string,int>>& vect) {
    cout<<"Bibliothèque:"<<endl;
    for (const auto& livre : vect) {
        cout<<"Livre: "<<livre.first<<", Pages: "<<livre.second<<endl;
    }
}

void trierVecteur(vector<pair<string,int>>& vect) {
    bool echange;
    for (int i=0; i<vect.size()-1; i++) {
        echange=false;
        for (int j=0;j<vect.size()-i-1;j++) {
            if (vect[j].second>vect[j+1].second) {
                pair<string,int> temp=vect[j];
                vect[j]=vect[j+1];
                vect[j+1]=temp;
                echange=true;
            }
        }
        if (!echange) {
            break;
        }
    }
}

int main() {
    int taille;
    cout<<"Entrez le nombre de livres dans la bibliothèque: ";
    cin>>taille;
    while (taille<=0) {
        cout<<"La taille doit être un entier strictement positif !"<<endl;
        cout<<"Entrez le nombre de livres dans la bibliothèque: ";
        cin>>taille;
    }
    vector<pair<string,int>> vect(taille);
    remplirVecteur(vect);
    cout<<"\nAvant le tri:"<<endl;
    afficherVecteur(vect);
    trierVecteur(vect);
    cout<<"\nAprès le tri (selon le nombre de pages):"<<endl;
    afficherVecteur(vect);
    return 0;
}
