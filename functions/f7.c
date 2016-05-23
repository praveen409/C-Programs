


	#include<stdio.h>
	int revers(int a)
	{
	int n, revers = 0, rem;
	printf("\nEnter an Integer:");
	scanf("%d",&n);
	while(n!=0)
		{
			rem=n%10;
			revers = revers*10 + rem;
			n /= 10;
		}
	printf("The reverse no is:%d",revers);
	}
	
	int main()
	{

	revers(123);

	printf("\n");
	return 0;
	}
	
