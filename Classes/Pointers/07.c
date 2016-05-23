





	#include<stdio.h>

	int main()
	{
		int a[5] = {12, 23, 34, 45, 56};
		int i;


		


		for(i = 0; i < 5; i++)
		{
			printf("%d\n", *(a+i));			

		}





		printf("After loop : %d \n", *a);




		return 0;
	}
