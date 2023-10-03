#include<stdio.h>
void main()
{
    int x,rem,n,res;
    printf("Enter a number: ");
    scanf("%d",&x);
    n=x;
    while(x!=0)
    {
        rem = x%10;
        res = res +rem*rem*rem;
        x = x/10;
    }
    
    if(res==n)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
    