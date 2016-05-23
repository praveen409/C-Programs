


	#include<stdio.h>
	int main()
	{
	int no[500],size,i,even=0,odd=0;
	printf("\nEnter the size you need:");
	scanf("%d",&size);
	printf("\nEnter the values:");
	
	for(i=0;i<size;i++)
	{
	scanf("%d",&no[i]);
	
	}

	for(i=0;i<size;i++)
	{
		if(no[i] % 2 == 0)
		{
		even = even + no[i];
		}	
		else
		{
		odd = odd + no[i];
		}
	
	}
	
		printf("\nIn a Array even no sum is %d",even);
		printf("\nIn a Array odd no sum is %d\n",odd);

	return 0;
	}
