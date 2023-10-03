#include<stdio.h>
void main()
{
    int i,fact=1,x;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        fact = fact*i;
    }
    printf("Factorial is = %d",fact);
}
