

	#include<stdio.h>
	int sum =0;
	int SumArray(const int *ptr,int n)
	{
	int i;
	for(i=0;i<=n;i++)
		{
		sum = sum + *(ptr+i);
	
		}
	return sum;
	}


	int main()
	{
	int a[]={12,112,12,121,212,121,21,212},n,i;
	
	printf("\n Enter the no:");
	scanf("%d", &n);


	SumArray(a,n);

	printf("the sum is : %d\n",sum);
	return 0;
	}



