


	#include<stdio.h>
	void printOddSeries(int a, int b)
	{	
	for(a=0;a<=b;a++)
	{
	if(a % 2 != 0)
	
	printf("%d\t",a);

	}
	printf("\n");
	}

	



	int main()
	{
	
	printOddSeries(1,200);

	printf("\n");
	return 0;
	}
