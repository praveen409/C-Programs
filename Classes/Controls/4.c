


	#include<stdio.h>

	int main()
	{
		int day;

		printf("Enter the day number : ");
		scanf("%d", &day);


		switch(day)
		{
			case 1:
			case 7:
				printf("Holiday...\n");
				break;
			case 2:

				printf("Monday...\n");
				break;
			case 3:
			
				printf("Tuesday...\n");
				break;
			case 4:
		
				printf("Wednesday...\n");
				break;
			case 5:
		
				printf("Thursday...\n");
				break;
			case 6:

				printf("Friday...\n");
				break;
			
			

			default:

				printf("Error - Wrong Input...\n");
		}

		printf("Bye....\n");

		return 0;
	}
