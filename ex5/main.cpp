#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

///Version tableau dynamique
// Définition de la structure Ville
struct Ville {
    string nom;
    double latitude;
    double longitude;
};

// Fonction pour rechercher une ville dans un vector
bool rechercherVille(const vector<Ville>& villes, const string& nom, Ville& resultat) {
    for (const Ville& ville : villes) {
        if (ville.nom==nom) {
            resultat=ville;
            return true;
        }
    }
    return false;
}

int main() {
    vector<Ville> villes={
        {"Tunis", 36.8065, 10.1815},
        {"Sfax", 34.7406, 10.7603},
        {"Sousse", 35.8256, 10.6084},
        {"Gabès", 33.8815, 10.0982},
        {"Kairouan", 35.6781, 10.0963}
    };

    string nomRecherche;
    cout<<"Entrez le nom de la ville à rechercher : ";
    cin >>nomRecherche;

    Ville villeTrouvee;
    if (rechercherVille(villes, nomRecherche, villeTrouvee)) {
        cout<<"Ville trouvée : "<<villeTrouvee.nom
            <<" (Latitude : "<<villeTrouvee.latitude
            <<", Longitude : "<<villeTrouvee.longitude<<")"<<endl;
    }
    else {
        cout<<"Ville non trouvée !"<<endl;
    }
    return 0;
}

///Version map
/*
struct Ville{
    double latitude;
    double longitude;
};
bool rechercherVille(const unordered_map<string, Ville>& villes, const string& nom, Ville& resultat) {
    auto it=villes.find(nom);
    if (it!=villes.end()) {
        resultat=it->second;
        return true;
    }
    return false;
}

int main() {
    unordered_map<string, Ville> villes={
        {"Tunis", {36.8065, 10.1815}},
        {"Sfax", {34.7406, 10.7603}},
        {"Sousse", {35.8256, 10.6084}},
        {"Gabès", {33.8815, 10.0982}},
        {"Kairouan", {35.6781, 10.0963}}
    };

    string nomRecherche;
    cout<<"Entrez le nom de la ville à rechercher : ";
    cin>>nomRecherche;

    Ville villeTrouvee;
    if (rechercherVille(villes, nomRecherche, villeTrouvee)) {
        cout<<"Ville trouvée : "<<nomRecherche
             <<" (Latitude : "<<villeTrouvee.latitude
             <<", Longitude : "<<villeTrouvee.longitude<<")"<<endl;
    }
    else {
        cout<<"Ville non trouvée !"<<endl;
    }
    return 0;
}
*/
