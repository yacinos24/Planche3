#include <iostream>
#include<array>
using namespace std;
array<int,100> remplir(int n){
    array<int,100>t;
    for (int i=0;i<n;i++){
        cout<<"t["<<i<<"]=";
        cin>>t[i];
    }
    return t;
}
void recherche(array<int,100>t,int n,int v){
    for (int i=0;i<n;i++){
        if (t[i]==v ){
            cout<<v<<" se trouve dans le tableau a la position "<<i<<endl;
            break;
        }
        if (t[i]!=v && i==n-1)
            cout<<v<<" ne se trouve pas dans le tableau ";
    }
}

int main()
{
    int n,v;
    cout<<"Donner la taille du tableau";
    cin>>n;
    array<int,100>t;
    t=remplir(n);
    cout<<"Donner l'entier a rechercher";
    cin>>v;
    recherche(t,n,v);
    return 0;
}
