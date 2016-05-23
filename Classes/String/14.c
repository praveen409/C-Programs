

	
	#include<stdio.h>
	#include<ctype.h>

	int main()	
	
	{

		char str[7][20];

		int i;


		printf("Enter the 7 strings : ");
		for(i = 0; i < 7; i++)
		{
			scanf("%s", str[i]);
		}



		printf("These are the strings : \n");
		for(i = 0; i < 7; i++)
		{

			printf("%s\n", str[i]);

		}


		for(i = 0; i < 7; i++)
		{
			if(islower(str[i][0]))
			{

				str[i][0] = str[i][0] - 32;

			}
		
		}
		
		printf("These are the Capitalized strings : \n");
		for(i = 0; i < 7; i++)
		{

			printf("%s\n", str[i]);

		}

		return 0;
	}



