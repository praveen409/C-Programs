

	#include<stdio.h>
	
	
	void showbits(unsigned char)
	
	int main()

	{
	unsigned int char n, k, dh;
	
	printf("\nEnter the no: ");

	scanf("%d",&n);

	dh=~n;

	if(n <= 265)

	{
	printf("\n Decemal %d is same as hex:%X and Binary\t",n,dh);
	showbits(n);
	k=~n;
	printf("\n Once complement of %d is \t",n)
	showbits(k);

	}
	
	return 0;

	}

	void showbits(unsigned char n)
	{
	int i;
	unsigned int j,k, andmask;
	for (i=15;i>=0;i--)
	 {
	 j = i;
	 andmask = 1 << j;
	 k = n & andmask;
	 k == 0 ? printf("0") : printf("1");
	 }
	}


























