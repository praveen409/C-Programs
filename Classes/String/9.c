





	#include<stdio.h>
	#include<string.h>


	int main()
	{
		char str1[] = "Programming Language";

		char str2[100];

		char str3[100];

		printf("String 1 = %s\n", str1);


		

		strcpy(str2, str1);  

		printf("String 2 = %s\n", str2);


		
		strncpy(str3, str1, 11);
		 str3[11] = '\0';
		printf("String 3 = %s\n", str3);


		
		return 0;

	}
