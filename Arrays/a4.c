

	#include<stdio.h>
	int main()
	{
	int n,c,d,a[100],b[100];
	
	printf("\nEnter the byte you need: ");

	scanf("%d",&n);

	printf("\n Enter the values \n");

	for(c=0;c<n;c++)
		{
		scanf("%d",&a[c]);
		}
	for(c=n-1,d=0;c>=0;c--,d++)
		{
		b[d]=a[c];
		}
	for(c=0;c<n;c++)
		{
		a[c]=b[c];
		}
	
	printf("\nRevers order is\t");

	for(c=0;c<n;c++)
		{
		printf("\n%d",a[c]);
		}





	printf("\n");
	return 0;
	}
