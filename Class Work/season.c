



	#include<stdio.h>

	int main()

	{

	int a;
	printf("\nenter the month option: ");
	scanf("%d",&a);

	switch(a)
	
		{
		case 1:
		case 2:
		case 3:
			printf("\nSummer\n");
			break;	
		case 4:
		case 5:
		case 6: 
			printf("\nRainy");
			break;
		case 7:
		case 8:
		case 9:
			printf("\nwinter");
			break;
		case 10:
		case 11:
		case 12:
			printf("\nSping");
			break;
		default:
			printf("\n You entered rong input");
		
		}

	printf("\nTask complete\n");
	return 0;
	}



