#include<stdio.h>
void main()
{
    int year,month,date;
    printf("Enter Year: ");
    scanf("%d",&year);
    printf("Enter Month: ");
    scanf("%d",&month);
    printf("Enter Date: ");
    scanf("%d",&date);
    if(month<=12)
    {
       if((date>=1 && date<=31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
        {
            printf("date is valid");
        }
        else if((date>=1 && date<=30) && (month==4 || month==6 || month==9 || month==11))  
        {
            printf("Date is valid");
        }
        else if((date>=1 && date<=28) && (month==2))
        {
            printf("Date is valid");
        }
        else
        {
            printf("invalid");
        }
    }
}
