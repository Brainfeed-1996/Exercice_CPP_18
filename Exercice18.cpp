/*
Calculer la somme des n premiers termes de la « série harmonique », c’est-à dire
la somme :
1 + 1/2 + 1/3 + 1/4 + ..... + 1/n
La valeur de n sera lue en donnée.
*/

#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    int nombre; //Nombre de termes de la série harmonique
    float somme;
    int i;
    do {
        cout << "Combien de termes ? : ";
        cin >> nombre;
    }while (nombre < 1);
    for (i=1, somme=0 ; i<=nombre ; i++) somme += (float)1/i;
    cout << "Somme des " << nombre << " premiers termes = " << somme;
}

/*Résultat :
Combien de termes ? : 0
Combien de termes ? : 1200
Somme des 1200 premiers termes = 7.66771
  */
