

	#include<stdio.h>
	#include<math.h>
	int main()
	{
	int a,square,cube,*ptr,*ptr1,*ptr2;
	printf("Enter the A: ");
	scanf("%d",&a);i

	ptr = &a;
	ptr1 = &square;
	ptr2 = &cube;
	
	*ptr1 = pow(*ptr,2);
	*ptr2 = pow(*ptr,3);
	
	printf("\nThe square is %d",*ptr1);
	printf("\nThe cube is %d\n",*ptr2);
	
	return 0;
	}
