#include<stdio.h>
void main()
{
    int rev=0,n,rem,x;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(x=n;n!=0;n=n/10)   
    {
        rem=n%10;
        rev = rev*10+rem;
    }
    if(rev==x)
    {
        printf("Number is pallindrome");
    }
    else
    {
        printf("Number is not pallindrome");
    }
}