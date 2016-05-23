





	#include<stdio.h>

	int *getArray()
	{
		static int a[5] = {12,23,34,45,56};
		return a;
	}



	int main()
	{

		int *ptr, i;



		ptr = getArray();


		
		for(i = 0;  i < 5; i++)
		{

			printf("%d ", ptr[i]);
		}


		printf("\n");

		return 0;
	}
