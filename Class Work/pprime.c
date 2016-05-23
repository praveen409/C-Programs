



	#include<stdio.h>

	int main()
	{
	int num, n, div, p;
	printf("enter the no:");
	scanf("%d",&num);
	
	for (n=2; n<=num; n++)
		{
		for (div=1; div < n; div++)
			{
			if(num % 2==0)
			{
			
			p = 1;
			}
			else
			p = 0;
		
			
		
			if (p=1)
			{
			printf("%d is prime number\n",n);
			}
			}
			
		
		}
	return 0;
	}





