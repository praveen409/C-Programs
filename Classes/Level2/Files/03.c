







	#include<stdio.h>


	int main()
	{

		FILE *fptr;

		fptr = fopen("./Sample3.txt", "w");


		putw(234, fptr);


		fclose(fptr);


		return 0;
	}
