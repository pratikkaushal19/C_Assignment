#include<stdio.h>
void main()
{
	int num1,num2,choice,add,subtract,multiply,divide;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("\n1-Addition \n2-Subtraction \n3-Multiplication \n4-Division");
    printf("\nEnter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
	
	case 1:
		    add=num1+num2;
			printf("Sum is = %d",add);
			
			break;
	case 2:
			subtract=num1-num2;
			printf("Differ is = %d",subtract);
        	
			break;
	case 3:
			multiply=num1*num2;
			printf("Product is = %d",multiply);
    		
			break;
	case 4:
			divide=num1/num2;
			printf("Answer is = %d",divide);
			
			break;		
	default: printf("Wrong Choice");
				break;
}
}
