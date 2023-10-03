#include<stdio.h>
int main()
{
    int r,area,circumference;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    area = 3.14*r*r;
    printf("\nArea of circle is = %d",area);
    circumference = 2*3.14*r;
    printf("\nCircumference is = %d",circumference);
    
}
