


	#include<stdio.h>
	int prod(int a, int b, int c)
	{
	int d;
	
	d=a*b*c;
	return d;
	}



	int main()
	{
	int a, b, c, d;
	printf("Enter the a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);

	printf("\nThe product of given no is : %d", prod(a, b, c));

	printf("\n");
	return 0;
	}
