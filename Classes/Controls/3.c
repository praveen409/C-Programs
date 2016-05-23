





	#include<stdio.h>

	int main()
	{
		int age;

		printf("Enter the age : ");
		scanf("%d", &age);

		if(age >= 0)
		{	
			if(age >= 0 && age <= 12)
			{
				printf("You are child....\n");
			}
			
			else if(age >= 13 && age <= 19)
			{
				printf("You are teen aged...\n");
			}
			
			else if(age >= 20 && age <= 35) 
			{
				printf("You are young....\n");
			}
	
			else
			{
				printf("You are old aged...\n");
			}
		}
		else
		{
			printf("Error - Unborn.....\n");
		}
		


		printf("Bye.....\n");

		return 0;
	}
