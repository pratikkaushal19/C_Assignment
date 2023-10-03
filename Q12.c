#include<stdio.h>
void main()
{
    int x;
    printf("Enter age: ");
    scanf("%d",&x);
    if(x>=18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("Not Eligible for vote");
    }
}
