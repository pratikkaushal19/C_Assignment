#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("First number is greater");
    }
    else if(b>a && b>c)
    {
        printf("Second number is greater");
    }
    else
    {
        printf("Third number is greater");
    }
}
