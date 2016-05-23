







	#include<stdio.h>


	int main()
	{

		FILE *fptr;

		fptr = fopen("./Sample3.txt", "w");


		fputs("apple", fptr);


		fclose(fptr);


		return 0;
	}
