//
// Created by Claire Pitance  on 27/09/2021.
//
#include <stdio.h>
#include "FONCTION.h"

/*
int getMax(int a, int b){
    if(a>b){
        printf("l'entier maximum est: %d", a);
    }
    else if(a<b){
        printf("l'entier maximum est: %d", b);
    }
    else{
        printf("les deux entiers ont la même valeure");
    }
return 0;
}
*/

int getMax(int a, int b){
    return (a<b)? b : a;
}

int saisirEntier(){
    int n=0;
    printf("saisissez un entier :\n>");
    scanf("%d",&n);
    return n;
}

float saisirFlottant(){
    float c=0;
    printf("saisissez  un flottant:\n>");
    scanf("%f",&c);
    return c;
}

float calculAire(float l, float L){
    return l*L;
}

float calculPerimetre(float l, float L){
    return 2*l + 2*L;
}

int nombreMultiple(int l , int L){
    if (l>=L){
        return (l%L==0)? 1 : 0;
    }
    if (l<L){
        return (L%l==0)? 1 : 0;
    }
}

int multiple3Superieur10(int n, int t){
    (n>=10)? printf("l'entier est supérieur ou égal à 10\n"):printf("l'entier est inférieur à 10 \n");
    if (t>=n){
        return (t%n==0)? 1 : 0;
    }
    if (t<n){
        return (n%t==0)? 1 : 0;
    }
}

#define ENTIER 10
int multiple3Superieur10Macro(int n, int t){
    (n>=ENTIER)? printf("l'entier est supérieur ou égal à 10\n"):printf("l'entier est inférieur à 10 \n");
    if (t>=n){
        return (t%n==0)? 1 : 0;
    }
    if (t<n){
        return (n%t==0)? 1 : 0;
    }
}

float moyenne(int n1, int n2, int n3){
    return ( n1<0 || n2<0 || n3<0 || n1>20 || n2>20 || n3>20 )? -1 : ((float)n1+(float)n2+(float)n3)/3 ;
}


int classe(int N){
    int e=0, i=0, s=0;
    for(i=1; i<=N; i++){
        printf("notez le nombre d'élève dans la classe \n>");
        scanf("%d", &e);
        s = s + e;
    }
     return printf("le nombre d'élèves est de: %d", s);
}

int classebis(int n){
    int i=0, m=0, s=0;
    for(i=1;i<=n;i++){
        printf("notez le nombre d'élève dans la classe \n>");
        scanf("%d", &m);
        s=s+m;
    }
    return s;
}

int multipleDeuxSept(int n) {
    return ( ((n%7)!=0 ) && ((n%2)!=0))? 0:1;
}

int pyramide(int n){
    int i=0, m=0;
    while ( n > m ){
        i=i+1;
        m = m + i^2;
    }
    return i;
}

float calculMoyenne(int i, int s, int n) {
    i=i-1;
    s=s-n;
    printf("le calcul de la moyenne est terminé.\n");
    return printf("la moyenne des entiers est: %f", float(s)/float(i));
}
