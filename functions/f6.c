



	#include<stdio.h>
	void printPrimeSeries(int a,int b)
	{
	
	int n, div, p;
	for(n=a;n<=b;n++)
	{
		for(div=2;div<n;div++)
		{
		if(n%div == 0){ p=0; break; }
		else p=1;}
	if(p){printf("\t%d",n);}
	}

	}

	int main()
	{
	printPrimeSeries(5000,6000);
	printf("\n");
	return 0;
	}


