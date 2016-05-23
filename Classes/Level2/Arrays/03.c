



	// Stretchable Arrays

	#include<stdio.h>
	#include<stdlib.h>

	struct Account
	{
		int number;
		char name[20];
		double balance;
	};




	int main()
	{
		struct Account *ptr;
		int m, n, i;

		printf("Enter the number of account : ");
		scanf("%d", &n);

		ptr = (struct Account *)calloc(n, sizeof(struct Account));


		for(i = 0; i < n; i++)
		{		

			printf("Enter the account Number : ");
			scanf("%d", &(ptr+i) -> number);


			printf("Enter the account Name   : ");
			scanf("%s", (ptr+i) -> name);


			printf("Enter the account balance : ");
			scanf("%lf", &(ptr+i) -> balance);
		
		}


		printf("\n\n\n\nAccount Informations \n\n\n\n");

		for(i = 0; i < n; i++)
		{
			printf("%d\t%s\t%lf\n", (*(ptr+i)).number, 
						(*(ptr+i)).name,
						(*(ptr+i)).balance);
		}


		
		printf("Reallocation.....\n");
		
		printf("Enter additional number of account : ");
		scanf("%d", &m);


			

		ptr = (struct Account *)realloc(ptr, (m+n) * sizeof(struct Account));			

		

		for(i = n; i < m+n; i++)
		{		

			printf("Enter the account Number : ");
			scanf("%d", &(ptr+i) -> number);


			printf("Enter the account Name   : ");
			scanf("%s", (ptr+i) -> name);


			printf("Enter the account balance : ");
			scanf("%lf", &(ptr+i) -> balance);
		
		}


		printf("\n\n\n\nAccount Informations \n\n\n\n");

		for(i = 0; i < m+n; i++)
		{
			printf("%d\t%s\t%lf\n", (*(ptr+i)).number, 
						(*(ptr+i)).name,
						(*(ptr+i)).balance);
		}


		free(ptr);  // Memory Leak
		ptr = NULL;  // Dangling Pointer

		return 0;
	}



