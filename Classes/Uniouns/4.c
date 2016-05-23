



	// Array of Structures
	#include<stdio.h>

	struct Passenger
	{
		int number;
		char name[20];
		char contact[12];
	};


	int main()
	{
		struct Passenger p[2];
                
		int i;

		for(i=0; i<2; i++)
		{
			printf("enter the number\n");
			scanf("%d", &p[i].number);
			printf("enter the name\n");
			scanf("%s", p[i].name);
			printf("enter the contact\n");
			scanf("%s", p[i].contact);

		}

	for(i=0;i<2;i++)
	{
		printf("%d \t%s \t%s\n", p[i].number, p[i].name, p[i].contact);

	}
	return 0;
	}
