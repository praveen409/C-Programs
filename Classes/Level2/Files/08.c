




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

		struct Customer c1 = {121, "Mohan", "mohan@gmail.com"};

		fptr = fopen("Customer.txt", "w");

		fwrite(&c1, sizeof(c1), 1, fptr);

		fclose(fptr);


		return 0;
	}
