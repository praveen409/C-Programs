


	#include<stdio.h>

	int main()
	{
	
	long int amount, h1000, h500, h100, h50, h10, h5, h2, h1;

	printf("\nEnter the Amount:");
	
	scanf("%ld",&amount);
	
	h1000 = amount / 1000;
	
	printf("\nThe 1000's are:\t%ld", h1000);

	amount %= 1000;
	
	h500 = amount / 500;

	printf("\nthe 500's are:%ld", h500);

	amount %= 500;

	h100 = amount / 100;

	printf("\nthe 100's are:%ld", h100);

	amount %= 100;

	h50 = amount / 50;
	
	printf("\nthe 50's are :%ld", h50); 

	amount %= 50;

	h10 = amount / 10;

	printf("\nthe 10's are:%ld", h10); 
	
	amount %= 10;

	h5 = amount / 5;

	printf("\n the 5's are:%ld", h5);
	
	amount %= 5;

	h2 = amount / 2;

	printf("\nthe 2's are:%ld", h2);

	amount %= 2;

	h1 = amount / 1;

	printf("\nthe 1's are:%ld\n", h1);

	return 0;
	}


