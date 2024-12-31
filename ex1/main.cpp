#include <iostream>
using namespace std;

// Fonction pour remplir un tableau statiquement
void remplirTableauStatique(int tab[], int taille) {
    for (int i = 0; i < taille; ++i) {
        cout<<"Entrez la valeur pour tab["<<i<<"]: ";
        cin>>tab[i];
    }
}
// Fonction pour remplir un tableau dynamiquement
void remplirTableauDynamique(int* tab, int taille) {
    for (int i = 0; i < taille; ++i) {
        cout << "Entrez la valeur pour tab[" << i << "]: ";
        cin >> tab[i];
    }
}
// Fonction pour compter les valeurs positives
int compterPositifs(const int tab[], int taille) {
    int compteur = 0;
    for (int i = 0; i < taille; ++i) {
        if (tab[i] > 0) {
            ++compteur;
        }
    }
    return compteur;
}
int main() {
    int choix;
    cout << "Choisissez le type d'allocation:\n1. Statique\n2. Dynamique\nVotre choix: ";
    cin >> choix;

    if (choix==1) {
        // Allocation statique
        int taille;
        cout<<"Entrez la taille du tableau: ";
        cin>>taille;
        do{
            cout<<"Taille trop grande pour un tableau statique (max 100)."<<endl;

        }while(taille>100);

        int tab[100];
        remplirTableauStatique(tab, taille);
        cout << "Nombre de valeurs positives: "<<compterPositifs(tab, taille)<<endl;
    } else if (choix==2) {
        int taille;
        cout << "Entrez la taille du tableau: ";
        cin >> taille;

        int* tab = new int[taille];
        remplirTableauDynamique(tab, taille);
        cout<<"Nombre de valeurs positives: "<<compterPositifs(tab, taille)<<endl;
        delete[] tab;
    } else{
        cout << "Choix invalide!" << endl;
    }

    return 0;
}
