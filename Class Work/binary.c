


	#include<stdio.h>

	void showbits(unsigned char);


	int main()

	{
	unsigned int num;
	
	printf("Enter the number:");
	
	scanf("%d",&num);
	
	if(num <= 65536 )
	{
	
	printf("\nDecimal %d is same as binary \t", num);

	showbits(num);
	
	}

	else{ printf("\nYou enterd larg number\n");
	}

	return 0;
	}

	
	void showbits(unsigned char n)
	{
	
	int i;
	
	unsigned char j,k,andmask;
	for(i=16;i>=0;i--)
	 {
	 j=i;
	 andmask = 1<<j;
	 k = n & andmask;
	 k == 0 ? printf("0"):printf("1");
	 }
	}


