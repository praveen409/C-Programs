


	#include<ctype.h>

	#include<stdio.h>


	int main()
	{

		char ch;

		printf("Enter the character : ");
		scanf("%c", &ch);


		if(isalpha(ch))
		{
			printf("Alphabet....\n");
		}
		else
		{
			printf("Not alphabet....\n");
		}

		return 0;
	}
