


	#include<stdio.h>
	void showbits(unsigned char);
	
	int main()
	
	{
	unsigned char num;
	for(num = 0; num <= 9; num++)
	{
	printf("\n Decimal %d is same as binary\t",num);
	showbits(num);
	}
	return 0;
	}

	void showbits(unsigned char n)
	{
	int i;
	unsigned char j, k, andmask;
	for(i = 11; i >= 0; i--)
	{
	j=i;
	andmask = 1 <<j;
	k = n & andmask;
	k==0 ? printf("0"):printf("1");
	}
	}
