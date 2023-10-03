#include<stdio.h>
void main()
{
    int i,x,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        sum = sum + i;
    }
    printf("Sum is = %d",sum);
}