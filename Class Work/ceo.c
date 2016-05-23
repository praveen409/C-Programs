







	#include<stdio.h>
	int main()
	{
	int n,n_odd=0,n_even=0;
	printf("\nEnter the n value:");
	scanf("%d",&n);

	do {
		n_even += ((n%2)==0);
		n_odd += (n%2);
		n /= 10;
	   }while(n);

	printf("\nThe even no's count is: %d",n_even);
	printf("\nThe odd no's count is: %d\n",n_odd);

	return 0;
	}
	
