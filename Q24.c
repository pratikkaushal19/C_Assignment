#include<stdio.h>
void main()
{
    int n1,n2,i,gcd,lcm;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    for(i=1;(i<=n1 && i<=n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
        }    
    } 
    lcm = (n1*n2)/gcd;
    printf("LCM of two numbers %d and %d is %d",n1,n2,lcm);
    
}