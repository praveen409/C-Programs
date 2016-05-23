



	#include<stdio.h>


	int main()
	{

	int a, b, c,total;

	float avg;

	printf("\nEnter the marks of three sunjects:");
	scanf("%d%d%d", &a,&b,&c);
	if(a > 40 && b > 40 && c > 40)

	{
		printf("\n You are Passed\n");

		total = a + b + c;
		printf("\nTHE total is:%d",total);
		
		avg = total / 3;
		printf("\nThe avg is :%.2f",avg);
		if(avg > 90)
			{
			printf("\nA Grade\n");	
				}
		else if(avg > 80)
			{
			printf("\nB Grade\n");
				}
		else if(avg > 70)
			{
			printf("\nC Grade\n");
				}
		else if(avg > 60)
			{
			printf("\nD Grade\n");
				}
		else{
			printf("\n Just Passed\n");
				}
	}
	else
	{
	printf("\nYou failed.....\n");
	}
	return 0;
	}

