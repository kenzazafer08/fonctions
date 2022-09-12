#include <stdio.h>
#include <stdbool.h>

int fact(int n)
    {
        int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
    }
void sum(int num){
    int i,sum=0;
    for(i=1;i<=num;i++){
        sum=sum+fact(i)/i+fact(i+1);
    }
    
	printf("\n\n Function : find the sum of 1!/1+2!...%d+%d!/%d :\n",num-1,num,num);
	printf("----------------------------------------------------------\n");    
    printf("The sum of the series is : %d\n\n",sum);
}
float addition(float num1,float num2){
    float result;
    result = num1 + num2;
    return result;
}
float soustraction(float num1,float num2){
    float result;
    result = num1 - num2;
    return result;
}
float multiplication(float num1,float num2){
    float result;
    result = num1 * num2;
    return result;
}
float division(float num1,float num2){
    float result;
    result = num1 / num2;
    return result;
}
int positive(int num){
    if (num>0){return 1;}
}
int negative(int num){
    if (num<0){return 1;}
}
void espace(int i){
    int j;
    for(j=0;j<=i;j++){
        printf("  ");
    }
}
void triangle(int ligne,int num){
    int i, j=0, s;
    
    for(i=1; i<=ligne; ++i, j=0)
    {
        espace(num);
        for(s=1; s<=ligne-i; ++s)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("* ");
            ++j;
        }
        printf("\n");
    }
}
