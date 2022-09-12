#include <stdio.h>


//Write a program in C to find the sum of the series 1!/1+2! + 2!/2+3!+ 3!/3+4! using the function.

int fact(int);
void main()
{
    int sum=0,num,i;
    printf("Entrer un nombre : ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+fact(i)/i+fact(i+1);
    }
    
	printf("\n\n Function : find the sum of 1!/1+2!...%d+%d!/%d :\n",num-1,num,num);
	printf("----------------------------------------------------------\n");    
    printf("The sum of the series is : %d\n\n",sum);
}

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
