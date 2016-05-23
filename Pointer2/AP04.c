

	#include<stdio.h>
	if_Find(int *ptr,int n,int f)
	{
	int i,temp=0;
	n=n-1;
	for(i=0;i<=n;i++)
		{
			if(*(ptr+i) == f)
			{ 
				
				printf("\n The address is %d",i);
				
			}
		}
	}
	
	int main()
	{
	int a[]={1,2,3,54,5,6,7,8,9,10},n=10,i=0,f;
	

	printf("\n Enter the value to find: ");
	scanf("%d",&f);

	printf("\nTHE ARRAY ELEMENTS ARE: ");
	
	for(i=0;i<=n;i++)
		{
		printf(" %d ",a[i]);
		}

	if_Find(a,n,f);

	
	printf("\n");
	return 0;
	}
