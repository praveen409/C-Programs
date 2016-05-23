


	#include<stdio.h>


	int main()
	{
	int a[100],i,j,temp=0,n;

	printf("Enter the range :");
	scanf("%d",&n);
	

	printf("\nEnter the values :");
	
	for(i=0;i<n;i++)
	{
	scanf("%d", &a[i]);
	}
	
/*	for(i=0;i<=n;i++)
	{
	printf("\n Array[i]=> %d",a[i]);
	}*/
	
	for(i=0;i<2;i++)
		{
		
		for(j=i+1;j<n;j++)
			{
			if(a[i] > a[j])
				{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
		
				}
			}
	
		}
	
/*	printf("\nAfter Assending order");
	for(i=0;i<=n;i++)
	{
	printf("\n\t%d",a[i]);
	}*/

	
	printf("\n %d is the second smallest no in you enterd no's.\n",a[1]);
	

	
	return 0;
	}	
