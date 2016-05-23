


	#include<stdio.h>
	int main()
	{
	int a[100],b[100],i,j;


	printf("\n Enter the arrays elements:a[i]==> ");

	for (i=0;i<10;i++)
		{	
		scanf("%d",&a[i]);
		}

	for(j=9, i=0;j>=0,i<10;j--,i++)
		{
		
		b[j]=a[i];
		
		}

	printf("Reverse copy b[j]==>");

	for(j=0;j<10;j++)
		{
		printf(" %d ",b[j]);
		}
	printf("\n");
	return 0;
	}
