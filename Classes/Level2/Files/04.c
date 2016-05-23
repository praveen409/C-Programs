







	#include<stdio.h>


	int main()
	{

		FILE *fptr;

		char ch;

		fptr = fopen("./Sample2.txt", "r");


		ch = fgetc(fptr);

		printf("Content\n");
		printf("%c\n", ch);

		fclose(fptr);


		return 0;
	}
