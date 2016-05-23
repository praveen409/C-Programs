

	#include<stdio.h>
	
	int findSquare(int k); 


	int main()
	{
		int n;

		n = findSquare(findSquare(findSquare(2)));
	
		printf("%d\n", n);

		return 0;
	}

	int findSquare(int k)
	{
		return k * k;
	}
