#include <stdio.h>
#include "functions.h"
void main(){
    int taille,i;
    int tableau[taille];
    int choix;
    printf("Entrer la dimension de votre tableau : ");
    scanf("%d",&taille);
     for(int i=0;i<taille;i++){
        printf("tableau[%d] : ",i+1);
        scanf("%d",&tableau[i]);
    }
       do{
       printf("Afficher votre tableau : 1\n");
       printf("Chercher un element dans votre tableau : 4\n");
       printf("Triee votre tableau : 5\n");
       printf("Quitter : 6\n");
       scanf("%d",&choix);
       switch (choix)
       {
       case 1 :
        for(int i=0;i<taille;i++){
        printf("tableau[%d] = %d\n",i+1,tableau[i]);
        }
        break;
       case 2 :
        
        break;
        default:
        printf("Choix non valid");
        break;
       
       }
       }while(choix!=6);
}

