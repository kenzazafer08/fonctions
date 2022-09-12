#include <stdio.h>
#include "functions.h"

int main(){
    char Op;
	float num1, num2, result = 0;
	printf("Calculatrice normale");
  	printf("\n Enter un Operateur   :  ");
  	scanf("%c", &Op);
	printf("\n Enter les deux valeurs que vous voulez calculer :  \n");
  	scanf("%f%f", &num1, &num2);
  	switch(Op)
  	{
  		case '+':
  			result = addition(num1,num2);
  			break;
  		case '-':
  			result = soustraction(num1,num2);
  			break;
        case '*':
  			result = multiplication(num1,num2);
  			break;
        case '/':
  			result = division(num1,num2);
  			break;
		default:
			printf("\n Vous avez entré un opérateur non valide ");				    			
	}
    if(positive(result)==1){
       printf("\n The result of %.2f %c %.2f  est positive", num1, Op, num2);
    }else if(negative(result)==1){
        printf("\n The result of %.2f %c %.2f  est negative", num1, Op, num2);
    }else printf("\n The result of %.2f %c %.2f  est null", num1, Op, num2);
    return 0;
}