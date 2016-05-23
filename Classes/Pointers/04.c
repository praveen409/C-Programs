




	#include<stdio.h>

	int main()
	{
		int number, *ptr;

		ptr = &number;
		
		printf("Enter the number : ");
		scanf("%d", ptr);


		printf("Number = %d\n", number);


		return 0;
	}
