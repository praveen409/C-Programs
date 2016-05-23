


	#include<stdio.h>
	int main()
	{
	int a[10],i,x;
	
	printf("Enter the 10 no:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
	if(a[i]>x)
	x=a[i];	
	}
	
	for(i=0;i<10;i++)
	{
	if(a[i]<x)
	x=a[i];
	}
	// printf("Small no is %d\n",x);
	for(i=0;i<10;i++)
	{
	if(a[i]>x)
	{
	x=a[i];
	printf("Second small no is:%d\n",x);
	break;
	}
	}
	return 0;
	}
