



	#include<stdio.h>

	int main()

	{

	int a, b ,c;
	printf("\n ENTER the 3 no");

	scanf("%d%d%d",&a,&b,&c);

	if(a > b && a > c) 
	{
		printf("\nA is bigger \n");
	}
	else if (b > a && b > c)
	{
		printf("\nB is bigger\n");
	}
	else if (c > a & c > b)
	{
		printf("\n c is bigger\n");
	}
	else
	{
		printf("\n You entered same or eual numbers");
	}

	printf("\n BAY......\n");


	return 0;
	}
