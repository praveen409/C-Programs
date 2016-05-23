


	#include<stdio.h>
	int i = 67;

	int main()
	{
		int i = 45;

		{
			extern int i;
			printf("%d\n", i);
		}

		return 0;	
	}
