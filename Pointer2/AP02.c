

	#include<stdio.h>
	int sum =0;
	void SumArray(const int *ptr,int n,int *ptr1,int *ptr2,int *ptr3)
	{
	int i,sum1,sum2,sum3;
	
	*ptr1 = sum1;
	*ptr2 = sum2;
	*ptr3 = sum3;

	for(i=0;i<=n;i++)
	{
	printf(" %d ",*(ptr + i));
	}
	
	for(i=0;i<=n;i++)
		{
		sum1 = sum1 + *(ptr+i);
		if(*(ptr+i)%2 != 0)
		{
		sum2 += (*(ptr+i));
		}
		else
		{
		sum3 += (*(ptr+i));
		}
		}

	ptr1 = &sum1;
	ptr2 = &sum2;
	ptr3 = &sum3;		

	
	printf("\nThe Sum of Array is %d ", sum1);

	printf("\nThe Sum of OddArray is %d ",sum2);

	printf("\nThe Sum of EvenArray is %d \n",sum3);

	}


	int main()
	{
	int a[]={12,23,34,58,56,67,78,98,54,23},n,i,s1,s2,s3;
	
	printf("\n Enter the no:");
	scanf("%d", &n);


	SumArray(a,n,&s1,&s2,&s3);
/*
	printf("\nThe Sum of Array is %d ",s1);

	printf("\nThe Sum of OddArray is %d ",s2);

	printf("\nThe Sum of EvenArray is %d \n",s3);
	
*/	return 0;
	}



