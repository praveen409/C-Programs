




	#include<stdio.h>


	struct Customer
	{
		int id;
		char name[20];
		char email[50];
	};

	int main()
	{

		FILE *fptr;

		struct Customer c1;

		fptr = fopen("Customer.txt", "r");

		fread(&c1, sizeof(c1), 1, fptr);



		printf("ID	: %d\n", c1.id);
		printf("Name	: %s\n", c1.name);
		printf("Email	: %s\n", c1.email);


		fclose(fptr);


		return 0;
	}
