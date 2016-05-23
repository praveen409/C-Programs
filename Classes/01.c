

	#include<stdio.h>


	int main()
	{
		int a, b, c, d, e;
		int n;

		scanf("%d", &n);


		for(a = 1; a <= 15; a=a+2)
		{

		for(b = 1; b <= 15; b=b+2)
		{

		for(c = 1; c <= 15; c=c+2)
		{

		for(d = 1; d <= 15; d=d+2)
		{
	
		for(e = 1; e <= 15; e=e+2)
		{
			
			if((a + b + c + d + e) == n)
			{
				printf("%d %d %d %d %d\n", a, b, c, d, e);
			}

		}  
		}  
		}  
		}  
		}  

		return 0;
	}
