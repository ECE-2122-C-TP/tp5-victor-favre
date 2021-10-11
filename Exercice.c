//
// Created by victor on 11/10/2021.
//

#include "Exercice.h"
#include <stdio.h>



/* **********************************
 *            Exercice 1            *
 * **********************************/


NombreRationnel saisirNombreRationnel(){
    NombreRationnel p;
    printf("Saisissez le numerateur puis le denominateur:\n");
    scanf("%d %d", &p.numerateur, &p.denominateur);
    return p;
}


void afficherNombreRationnel(NombreRationnel p){
    printf("%d, %d", p.numerateur, p.denominateur);
}


NombreRationnel multiplicationNombreRationnel(NombreRationnel nd1, NombreRationnel nd2){
    NombreRationnel p;
    NombreRationnel nd1=saisirNombreRationnel(), nd2=saisirNombreRationnel();
    p.numerateur = nd1.numerateur * nd2.numerateur;
    p.denominateur = nd1.denominateur * nd2.denominateur;
    return p;
}



NombreRationnel aditionNombreRationnel(NombreRationnel nd1, NombreRationnel nd2){
    NombreRationnel p;
    NombreRationnel nd1 = saisirNombreRationnel(), nd2 = saisirNombreRationnel();
    p.numerateur = nd1.numerateur * nd2.denominateur + nd2.numerateur * nd1.denominateur;
    p.numerateur = nd1.denominateur * nd2.denominateur;
    return p;
}






/* **********************************
 *            Exercice 2            *
 * **********************************/


#define DIMENTION_MAX 100

void exercice2(){
    int n=0, i=0, a=0, b=0;
    int nombreDeCases=0;
    do {
        printf("Saisissez le nombre de cases:\n");
        scanf("%d", &nombreDeCases);
    }while (nombreDeCases>DIMENTION_MAX);             //Boucle pour obtenir un nombre de cases qui ne depasse pas la capacité
    int tableau[nombreDeCases];
    do {
        printf("Saisissez l'entiers à insérer dans le tableau:\n");
        scanf("%d", &n);
    }while (n>=nombreDeCases-n);                    //Boucle pour obtenir une valeur de n qui ne depasse pas la capacité
    for(i=0; i<n; i++){
        printf("Saisissez le numero %d: \n", i+1);
        scanf("%d", &a);
        tableau[i]=a;
    }
    for (i=0; i<n; i++){
        if (tableau[i] > b){
            b = tableau[i];
            printf("Le plus grand entier est %d", b)
        }
    }
}




/* **********************************
 *            Exercice 3            *
 * **********************************/

int exercice3(){
    int tableau[3][4], j=0, i=0, n=0;
    for (i=0; i<3; i++){
        for (j=0; j<4; j++)
        printf("Saisissez un entier: \n");
        scanf("%d", &n);
        tableau[i][j] = n;
    }
}

