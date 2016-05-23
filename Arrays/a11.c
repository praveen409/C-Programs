
	#include<stdio.h>
	int main()
	{
	int a[100],b[100],c[100],i,j=0,k=0,count=0,temp=0;


	printf("\n Enter the arrays elements:a[i]==> ");

	for (i=0;i<10;i++)
		{	
		scanf("%d",&a[i]);
		}

	for(i=0;i<10;i++)
		{
		if(a[i] % 2 == 0)
		{
		b[j]=a[i];		
		j++;
		count++;
		}
		else
		{
		c[k]=a[i];
		k++;
		temp++;
		}
		}
	printf("\nEven elements are b[j]==> ");

	for(j=0;j<count;j++)
		{
		printf(" %d ",b[j]);
		}
	printf("\n Odd elements are c[j]==> ");

	for(k=0;k<temp;k++)
		{
		printf(" %d ",c[k]);
		}
	
	printf("\n");
	return 0;
	}
