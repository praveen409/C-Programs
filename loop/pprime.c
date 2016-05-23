0



	#include<stdio.h>

	int main()
	{
	int n, div, p;

	
	for (n=2; n<=100; n++)
		{
		for (div=2; div < n; div++)
			{
			if(n % div == 0)
			{
			p = 0; break;
			}
			p=1;
			}
		
			
		
			if(p)
			{
			printf("%d \n",n);
			}
			}
			
		printf("\n");
		
	return 0;
	}





