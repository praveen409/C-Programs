







	// Passing Array to function... 


	#include<stdio.h>

		

	void display(const int *ptr, int n)
	{
		int i;

		
		for(i = 0; i < n; i++)
		{
			printf("%d ", *(ptr+i));
		}

		printf("\n");
	}





	int main()
	{
		int a[] = {12,23,34,45,56};		
		int b[] = {33,44,55};


		display(a, 5);

		display(b, 3);

		return 0;
	}
