


	#include<stdio.h>
	int main()
	{
	int a[100],b[100],i;


	printf("\n Enter the arrays elements:a[i]==> ");

	for (i=0;i<10;i++)
		{	
		scanf("%d",&a[i]);
		}

	for(i=0;i<10;i++)
		{
		b[i]=a[i];
		}

	printf("b[i]==>");

	for(i=0;i<10;i++)
		{
		printf(" %d ",b[i]);
		}
	printf("\n");
	return 0;
	}
