#include<stdio.h>
void main()
{
    float p,r,t,interest;
    printf("Enter principal: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time: ");
    scanf("%f",&t);
    
    interest = (p*r*t)/100;
    printf("Simple interest is = %f",interest);
}
