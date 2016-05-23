










	#include<stdio.h>

	int main()
	{
		int i = 1;

		do
		{
			printf("%d ", i);

			i++;


			if(i <= 15)
				continue;

		}while(0);

		printf("\n");

		return 0;
	}
