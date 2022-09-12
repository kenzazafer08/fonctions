#include <stdio.h>
#include "functions.h"
void main(){
   int num,i,T;
    printf("Entrer la taille de votre arbre : ");
    scanf("%d",&T);
    printf("Entrer la taille du premier triangle : ");
    scanf("%d",&num);
    for(i=0;i<T;i++){
      triangle(num+i,num-i); 
    }
}