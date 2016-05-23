




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


		ptr = (struct Account *)malloc(sizeof(struct Account));

		printf("Enter the account Number : ");
		scanf("%d", &ptr->number);


		printf("Enter the account Name   : ");
		scanf("%s", ptr -> name);


		printf("Enter the account balance : ");
		scanf("%lf", &ptr -> balance);



		printf("Number : %d\n", ptr -> number);
		printf("Name   : %s\n", ptr -> name);
		printf("Balance: %lf\n", ptr -> balance);


		free(ptr);
		


		return 0;
	}
