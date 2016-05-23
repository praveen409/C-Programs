




	#include<stdio.h>


	int main()
	{
		int number;


		printf("Enter the number : ");
		scanf("%d", &number);



		(number >= 0 && number <= 9) ? printf("Single Digit.\n") : printf("Not Single Digit.\n");

		return 0;
	}
