


	#include<stdio.h>
	int main(){
	
	int a[100],b[100],c[100],n,i,j=0;

	printf("\nenter the no bytes : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements for A ");

	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}	

	printf("\nEnter the elements for B ");

	for(i=0;i<n;i++)
	{
	scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++)
		{
		c[i]=a[i];
		
		}
	for(j=n,i=0;j<n+n,i<n;j++,i++)
		{
		c[j]=b[i];
		}
	printf("\nThe c[i]==> ");
	for(i=0;i<2*n;i++)
	{
	printf(" %d ",c[i]);
	}
	
	printf("\n");
	return 0;}
	

