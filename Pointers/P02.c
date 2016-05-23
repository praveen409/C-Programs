

	#include<stdio.h>
	#include<math.h>
	int main()
	{
	int a[]={1,2,3,4,5,6,7,8,9,10},n,i=0;
	int *ptr2, *ptr1;

	printf("The Array is: ");

	for(i=0;i<10;i++)
	{
	printf(" %d ",a[i]);
	}

	ptr1 = &a[0];

	printf("\nEnter the value to Find: ");
	scanf("%d",&n);
	
	ptr2 = &n;

	for(i=0;i<10;i++)
	{
		if(*(ptr1+i) == *(ptr2))
		{
		printf("The Address is : %d \n",i);
		}
		
	
	}



	return 0;
	}
