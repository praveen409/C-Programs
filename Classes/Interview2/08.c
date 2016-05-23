


	#include<stdio.h>


	int main()
	{
		int i = 1;


		START:

			printf("%d ", i);

			i = i + 1;

			if(i >= 10)
			{
				goto END;
			}
			goto START;


		END:
		
			printf("\n");

			return 0;
	}


	
