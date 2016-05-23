


	#include<stdio.h>

	int main()
	{
		int x = 0;

		if( x++ )
			printf("True..\n");
		else if(x == 0)
			printf("False...\n");
		else
			printf("Nothing..\n");

		return 0;
	}
