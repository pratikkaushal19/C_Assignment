#include<stdio.h>
void main()
{
    int x,f,f1,f2,i=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    f=0;
    f1=1;
    f2=1;
    do
    {
        i++;
        printf("%d\n",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    while(i<=x);
}