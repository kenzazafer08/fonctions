#include <stdio.h>
#include "functions.h"
void main(){
   int num,i;
    printf("Entrer la taille de votre arbre : ");
    scanf("%d",&num);
    for(i=0;i<3;i++){
     espace(num-i);
      triangle(num+i+1); 
    }
}