#include<stdio.h>
void main()
{
   float sub1,sub2,sub3,sub4,sub5,percentage;
   printf("Enter marks of first subject:  ");
   scanf("%f",&sub1);
   printf("Enter marks of second subject:  ");
   scanf("%f",&sub2);
   printf("Enter marks of third subject:  ");
   scanf("%f",&sub3);
   printf("Enter marks of fourth subject:  ");
   scanf("%f",&sub4);
   printf("Enter marks of fifth subject:  ");
   scanf("%f",&sub5);
   percentage = (sub1+sub2+sub3+sub4+sub5)/100;
   printf("Percentage is = %f",percentage);
}
