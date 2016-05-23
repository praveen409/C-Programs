



	#include<stdio.h>

	int main()

	{

	int a, b ,c, d;
	printf("\n ENTER the 4 no");

	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a > b && a > c && a > d) 
	{
		printf("\nA is bigger \n");
	}
	else if (b > a && b > c && b > d)
	{
		printf("\nB is bigger\n");
	}
	else if (c > a & c > b && c > d)
	{
		printf("\n C is bigger\n");
	}

	else if (d > a & d > b && d > c)
	{

		printf("\n D is bigger\n");

	}

	else
	{
		printf("\n You entered same or eual numbers");
	}

	printf("\n BAY......\n");


	return 0;
	}
