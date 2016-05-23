

	#include<stdio.h>
	void reves(int *ptr,int n)
	{
	int i,temp=0;
	n=n-1;
	for(i=0;i<n;i++,n--)
	{
	temp=*(ptr+i);
	*(ptr+i)=*(ptr+n);
	*(ptr+n)=temp;
	}
	}
	int main()
	{
	int a[]={1,2,3,4,5,6,7,8,9,10},n,i=0;
	printf("\n Enter the value N: ");
	scanf("%d",&n);
	printf("\nTHE ARRAY ELEMENTS ARE: ");
	for(i=0;i<n;i++)
	{
	printf(" %d ",a[i]);
	}
	reves(a,n);

	printf("\nTHE ARRAY ELEMENTS AFTER SORTING ARE: ");
	for(i=0;i<n;i++)
	{
	printf(" %d ",a[i]);
	}

	printf("\n");
	return 0;
	}
