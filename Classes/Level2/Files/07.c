




	#include<stdio.h>

	int main()
	{
		FILE *fptr;
		char name[25];
		int age;
		char gender;

		fptr = fopen("text.txt", "r");

		fscanf(fptr, "%s%d%c", name, &age, &gender);		


		printf("Name	: %s\n", name);
		printf("Age	: %d\n", age);
		printf("Gender	: %c\n", gender);
		

		fclose(fptr);
	
		return 0;
	}
