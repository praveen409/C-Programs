









	#include<stdio.h>


	int main()
	{
		int i = 1;


		START:

			printf("Hello, %d\n", i);

			i++;

			if(i == 10)
				break;

		goto START;
	

		return 0;
	}
