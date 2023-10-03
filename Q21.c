#include<stdio.h>
void main()
{
    int i,x,res;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
         res = x*i;
        printf("\n%d * %d = %d",x,i,res);
    }
}