#include<stdio.h>
void main()
{
    int x,count,i;
    printf("Enter a number: ");
    scanf("%d",&x);
    count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("Count is %d",count);
}