#include<stdio.h>
void main()
{
   float feh,c;
    printf("Enter temp: ");
    scanf("%f",&c);
    feh = (1.8*c) + 32;
    printf("%f",feh);
}
