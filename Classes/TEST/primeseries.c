


	#include<stdio.h>
	int main()
	{
	int num,n,div,p;
	printf("Enter teh no: ");
	scanf("%d",&num);
	
	printf(" 1  2 ");
	for(n=2;n<=num;n++)
	{
		for(div=2;div<n;div++)
		{
		if(n % div == 0)
		{
		p=0;
		break;
		}
		p=1;
		}
	if(p)
	{
	printf(" %d ",n);
	}
	}
	return 0;
	}
