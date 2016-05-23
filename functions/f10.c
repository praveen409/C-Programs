


	#include<stdio.h>
	int sumDigit(int a)
	{
	int n,digit,sum=0;
	for(n=a;n!=0;n /= 10)
	{
	digit=n%10;
	sum = sum + digit;
	}
	printf("sum of all digits is : %d", sum);
	
	}
	
	int main()
	{
	int a;
	printf("Enter the no  ");
	scanf("%d",&a);
	
	sumDigit(a);

	printf("\n");
	return 0;
	}
