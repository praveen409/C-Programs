





	#include<stdio.h>

	int main()
	{	
		char name[] = "Syed";
		int age = 21;
		char gender = 'M';
		FILE *fptr;

		fptr = fopen("text.txt", "w");


		fprintf(fptr, "%s\n%d%c", name, age, gender);


		fclose(fptr);

		return 0;
	}
