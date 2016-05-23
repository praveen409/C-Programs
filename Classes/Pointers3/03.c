




	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	int main()
	{
		char *ptr;

		ptr = (char *) calloc (6, sizeof(char));

		strcpy(ptr, "Hello");

		printf("%s\n", ptr);

		free(ptr);
		
		ptr = NULL;


		return 0;
	}
