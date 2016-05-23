


	#include<stdio.h>
	void sum(int a, int b, int c)
	{
	int d;
	
	d=a+b+c;
	printf("the sum is %d",d);
	}



	int main()
	{
	int a, b, c;
	printf("Enter the a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);

	sum(a, b, c);

	printf("\n");
	return 0;
	}
