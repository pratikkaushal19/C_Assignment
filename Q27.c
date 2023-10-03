#include<stdio.h>
void main()
{
	int choice;
	printf("Enter a number");
	printf("\n1-SUNDAY 2-MONDAY 3-TUESDAY 4-WEDNESDAY 5-THURSDAY 6-FRIDAY 7-SATURDAY");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("\nSUNDAY");
			break;
		case 2:
			printf("\nMONDAY");
			break;
		case 3:
			printf("\nTUESDAY");
			break;
		case 4:
			printf("\nWEDNESDAY");
			break;
		case 5:
			printf("\nTHURSDAY");
			break;
		case 6:
			printf("\nFRIDAY");
			break;
		case 7:
			printf("\nSATURDAY");
			break;
		default:
			printf("\nInvalid choice");
			break;	
	}
}
