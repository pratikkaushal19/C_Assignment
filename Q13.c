#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("First number is greater");
    }
    else 
    {
        printf("Second number is greater");
    }
}
