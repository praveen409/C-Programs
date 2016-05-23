


	#include<stdio.h>
	int main(){
	
	int a[100],b[100],n,i=0,temp;

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
	printf("By Exchanging the elements");
	
	for(i=0;i<n;i++)
		{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;			
		}
	
	
	printf("\nThe A[i]==> ");

	for(i=0;i<n;i++)
	{
	printf(" %d ",a[i]);
	}

	
	printf("\nThe B[i]==> ");

	for(i=0;i<n;i++)
	{
	printf(" %d ",b[i]);
	}

	
	printf("\n");
	return 0;
	}
	

