







	#include<stdio.h>


	int main()
	{

		FILE *fptr;

		fptr = fopen("./Sample2.txt", "w");


		fputc('a', fptr);


		fclose(fptr);


		return 0;
	}
