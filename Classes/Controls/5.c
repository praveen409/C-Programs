




	#include<stdio.h>

	int main()
	{
		int a, b, c;
		int option;
		
		printf("Enter the two numbers : ");
		scanf("%d%d", &a, &b);

		printf("1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remaining\n"); 


		printf("Enter the option : ");
		scanf("%d", &option);

		if(option >= 1 && option <= 5)
		{
			switch(option)
			{
				case 1: c = a + b; break;
				case 2: c = a - b; break;
				case 3:	c = a * b; break;
				case 4: c = a / b; break;
				case 5: c = a % b; break;
			
			}

			printf("Answer = %d\n", c);
		}
		else
		{
			printf("Error - option should be 1 to 5...\n");
		}

		printf("Bye....\n");

		return 0;
	}		
