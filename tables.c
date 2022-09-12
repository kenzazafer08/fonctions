#include <stdio.h>
#include "functions.h"
void main(){
    int taille,i;
    int tableau[taille];
    int choix;
    printf("Entrer la dimension de votre tableau : ");
    scanf("%d",&taille);
    saisie(tableau,taille);
       do{
       printf("Afficher votre tableau : 1\n");
       printf("Afficher le maximum : 2\n");
       printf("Afficher le minimum : 3\n");
       printf("Triee votre tableau : 4\n");
       printf("Quitter : 0\n");
       scanf("%d",&choix);
       switch (choix)
       {
       case 1 :
        affichage(tableau,taille);
        break;
       case 2 :
        max(tableau,taille);
        break;
        case 3 :
        min(tableau,taille);
        break;
        case 4 :
        tri(tableau,taille);
        break;
        case 5 :
        printf("Merci !");
        break;
        default:
        printf("Choix non valid");
        break;
       
       }
       }while(choix!=5);
}

