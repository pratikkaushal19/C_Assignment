#include<stdio.h>
void main()
{
    int x;
    printf("Enter year: ");
    scanf("%d",&x);
    if(x%400==0 )
    {
        printf("Leap Year");
    }
    else if(x%100==0)
    {
        printf("Not a Leap year");
    }
    else if(x%4==0)
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a Leap year");
    }
}
