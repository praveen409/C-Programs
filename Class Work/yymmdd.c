


	#include<stdio.h>

	int main()
	{
	
	long int yy, mm, ww, dd, hour, mint, secs;

	printf("\nEnter the years:");
	
	scanf("%ld",&yy);
	
	mm = yy * 12;

	printf("\nThe months are:\t%ld",mm);

	ww = yy * 52;

	printf("\nThe weeks are:\t%ld",ww);

	dd = yy * 365;

	printf("\nThe days are:\t%ld",dd);

	hour = yy * 8760;
	
	printf("\nThe hours are:\t%ld",hour);

	mint = hour * 60;

	printf("\nThe minutes are:\t%ld",mint);

	secs = mint * 60;

	printf("\nThe Secs are:\t%ld\n",secs);

	return 0;
	}


