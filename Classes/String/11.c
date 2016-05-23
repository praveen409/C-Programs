





	#include<stdio.h>
	#include<string.h>
	#include "mystring.h"

	int main()	
	{
		char str1[100], str2[100];


		puts("Enter the string : ");
		gets(str1); // Hello


		strcpy(str2, str1);


		xstrrev(str2);  // olleH



		if(strcmp(str1, str2) == 0)
		{
			printf("%s is Palindrome.....\n", str1);
		}
		else
		{
			printf("%s is not Palindrome.....\n", str1);
		}

		return  0;
	}



