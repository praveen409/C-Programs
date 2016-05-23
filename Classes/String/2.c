









	#include<stdio.h>

	int main()
	{
	
		char str[100];
		int i, count=0;


		printf("Enter the string : ");
		scanf("%s", str); // Input only one word strings. 
		

		i = 0;

		while(str[i] != '\0') 
		{

			printf("%c", str[i]); 

			count++; 

			i++; 
	
		}



		printf("\nLength of the string  : %d\n", count);

		return 0;
	}


	


	









