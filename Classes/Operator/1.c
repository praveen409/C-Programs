u





	#include<stdio.h>

	int main()
	{
		int days, weeks, odd_days;

	
		printf("Enter the number of days : ");  
		scanf("%d", &days);


		weeks = days / 7;
		odd_days = days % 7;
	

		printf("Number of weeks 	= %d\n", weeks);
		printf("Number of odd days	= %d\n", odd_days);

		return 0;
	}
