





	#include<stdio.h>

	int main()
	{
		int a[10], index;

		printf("Enter 10 elements : ");

		for(index = 0; index < 10; index++)
		{
			scanf("%d", &a[index]);
		}



		printf("The elements are : \n");
	
		for(index = 0; index < 10; index++)
		{
			printf("%d\n", a[index]);
		}

		return 0;
	}
