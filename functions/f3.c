


	#include<stdio.h>
	float findAvg(int a, int b, int c)
	{
	float d;
	
	d = (a+b+c)/3;

	

	return d;

	}



	int main()
	{
	int a, b, c;
	printf("Enter the a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);

	printf("\nThe Avg of given no is : %.3f", findAvg(a, b, c));

	printf("\n");
	return 0;
	}
