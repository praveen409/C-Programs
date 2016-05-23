




	#include<stdio.h>

	int main()	
	{
		char ch;

		printf("Enter the character : ");
		ch = getchar();


		putchar(ch);
		

		if(ch == 10)
		{
			printf("Enter key is pressed....\n");
		}
		else
		{
			printf("Something else is pressed....\n");
		}


		return 0;
	}

