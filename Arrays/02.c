


	#include<stdio.h>
	int main()
	{
	int a[20],i,x=0;

		
	printf("\nEnter the 10 values");

	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>x)
		{
		x=a[i];
		}

	}
	
	printf("\nMax= %d",x);

	printf("\n");

	return 0;
	}
