#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// Fonction pour remplir un tableau
void remplirVecteur(vector<int>& vect,int taille) {

    for (int i=0;i<taille;i++) {
        cout<<"Entrez la valeur numero "<<i<< ": ";
        cin>>vect[i];

    }
}
// Fonction mini_maxi avec std::pair
pair<int, int> mini_maxi(const vector<int>& A,int taille) {
    int mini=A[0];
    int maxi=A[0];
    for (int i=0;i<taille;i++) {
        if (A[i]<mini)
            mini=A[i];
        if (A[i]>maxi)
            maxi=A[i];
    }

    return{mini,maxi};
}

int main() {
    int taille;
    cout << "Entrez la taille du tableau: ";
    cin >> taille;
    while (taille<=0) {
        cout << "La taille doit être un entier strictement positif !" << endl;
        cout << "Entrez la taille du tableau: ";
        cin >> taille;
    }
    vector<int> tab(taille);
    remplirVecteur(tab,taille);
    pair<int, int> result = mini_maxi(tab,taille);
    cout << "La plus petite valeur est: " << result.first << endl;
    cout << "La plus grande valeur est: " << result.second << endl;
    return 0;
}
