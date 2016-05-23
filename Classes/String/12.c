


	#include<stdio.h>

	#include<string.h>


	int main()
	{

		char str1[] = "Programming";
		char str2[] = "Language";
		char str3[100];



		strcpy(str3, str1);

		strcat(str3, " ");

		strcat(str3, str2);


		puts(str1);
		puts(str2);
		puts(str3);
		
	
		return 0;
	}
