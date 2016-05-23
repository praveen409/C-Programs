



	#include<stdio.h>
	int main()
	{
	int digit, n, num, rev=0;
	
		printf("Enter the no:");
		scanf("%d", &n);

	
	while(n != 0)
	{
		digit = n % 10;
		rev = rev +digit;
		n = n / 10;
	
	}
	printf("sum of digit is:%d",rev);
	printf("\n");	

	return 0;
	}
