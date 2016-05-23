


	#include<stdio.h>
	int main(){
	
	int p,a[100],b[100],c[100],n,i=0,j=0,k=0,q=0;

	printf("\nenter the no bytes : ");
	scanf("%d",&n);
	p=n;
	
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
	////////// A & B Array Input is completed ////////////////
	for(i=0;i<p;i++)
		{
		c[k]=a[i];		
		k++;
		}
	////////// A Array copied to C array till n bits  /////////
	
	for(i=0;i<p;i++)
	{
	for(j=0;j<p;j++)
		{
		if(c[i] == b[j])
		{
		c[i]=b[j];
		q++;
		}
		else
		{
		c[k]=b[j];
		k++;
		}

	}
	}
	/////  B Array is copied to C Array after n and till 2n/////

	printf("\nThe c[i]==> ");

	for(i=0;i<2*p-q;i++)
	{
	printf(" %d ",c[i]);
	}
	
	printf("\n");
	return 0;
	}
	

