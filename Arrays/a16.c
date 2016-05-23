


	#include<stdio.h>
	int main(){
	
	int a[100],b[100],c[100],n,i,j,k=0,count =0;

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

	printf("\nIntersection of A, B Arrays is \n");

	for(i=0;i<n;i++)
		{
		for(j=0;j<n;j++)
			{
			if(a[i]==b[j])
				{
						
				c[k]=a[i];
				k++;
				++count;
				}
			}
		}
	if(count!=0)
	{
	for(k=0;k<count;k++)
	{
	printf(" %d ",c[k]);
	}
	}
	else {printf("\nNO Intersection elements are in your Arrays");}

	printf("\n");
	return 0;}
	

