







	#include<stdio.h>


	int main()
	{

		FILE *fptr;
		int n;

		fptr = fopen("./Sample3.txt", "r");


		n = getw(fptr);
		printf("Content\n");
		printf("%d\n", n);


		fclose(fptr);


		return 0;
	}
