//
// Created by Claire Pitance  on 27/09/2021.
//
#include "EXERCICE.h"
#include <stdio.h>
#include "FONCTION.h"

void exerciceExemple1(){
    int a=6, b=9;
    printf("%i", getMax(a,b));
    return;
}

void exercice2(){
    int n=0;
    printf("%d", saisirEntier(n));
    return;
}

void exercice3Aire(){
    float l, L;
    printf("saisissez la largeur du rectangle:\n");
    l=saisirFlottant();
    printf("saisissez la longueur du rectangle:\n");
    L=saisirFlottant();
    printf("%f", calculAire( l, L));
    return;
}

void exercice3Perimetre(){
    float l, L;
    printf("saisissez la largeur du rectangle:\n");
    l=saisirFlottant();
    printf("saisissez la longueur du rectangle:\n");
    L=saisirFlottant();
    printf("%f", calculPerimetre(l,L));
    return;
}

void exercie4Multiple(){
    int l, L;
    printf("saisissez un nombre:\n");
    l=saisirEntier();
    printf("saisissez un second nombre:\n");
    L=saisirEntier();
    printf("%d",nombreMultiple(l,L));
    return;
}

void exercie4Multiple3Superieur10(){
    int n = 0, t = 3;
    n=saisirEntier();
    printf("%d",multiple3Superieur10(n, t));
    return;
}
void exercie4Multiple3Superieur10Macro(){
    int n = 0, t = 3;
    n=saisirEntier();
    printf("%d",multiple3Superieur10Macro(n, t));
    return;
}


void exercice5(){
    int n1=0, n2=0, n3=0;
    float m=0;
    n1=saisirEntier();
    n2=saisirEntier();
    n3=saisirEntier();
    m=moyenne(n1, n2, n3);
    printf("%f", m );
    return;
}

void exrcice5Plussept(){
    int N=0;
    printf("notez les nombre de classe ouverte \n>");
    scanf("%d", &N);
    printf("%d",classe(N));
    return;
}

void exercice5PlusbisSept(){
    int n=0, s=0;
    printf("notez le nombre de classe ouverte \n>");
    scanf("%d", &n);
    s=classebis(n);
    printf("le nombre d'élève est de : \n %d", s);
    return;
}

void exercice5Plushuit(){
    int n = 0;
    n=saisirEntier();
    while ( ((n%7)!=0 ) && ((n%2)!=0)) {
        printf("vous devez saisir un nouveau entier. \n>");
        scanf("%d", &n);
    }
    printf ("%d",multipleDeuxSept(n));
    return ;
}

void exercice5PlusNeuf(){
    int n=0, i=0;
    printf ("saisissez le nombre de pierre disponible: \n>");
    scanf ( "%d", &n);
    i= pyramide(n);
    printf ( " Le nombre d'étage est de: %i", i );
    return;
}

void exercice5PlusDix(){
    int n = 0, s=0, i=0;
    float m=0;
    printf("nous allons calculer la moyenne d'entier positif\n");
    while (n >= 0) {
        printf("saisissez un nombre entier positif: \n");
        printf("ou saisissez un nombre négatif pour finir la saisie:\n>");
        scanf("%d", &n);
        s = s + n;
        i =i +1;
    }
    m=calculMoyenne(i,s,n);
    printf("la moyenne des entiers est: %f",m);
    return;
}





