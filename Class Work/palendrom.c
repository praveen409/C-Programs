



	#include<stdio.h>
	int main()
	{
	int digit, rev=0, n, num;
	
		printf("Enter the no:");
		scanf("%d", &n);
	num= n; 
	
	while(n != 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	
	}
	printf("reverse=%d\n",rev);

	if(rev == num)
	{
		printf("the digit is palindrum\n");
	}
	else
	{
		printf("The no is not palindrum\n");
	}
	printf("\n");	

	return 0;
	}
