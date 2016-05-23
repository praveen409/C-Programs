


	#include<stdio.h>
	
	
	int main()
	{
	int num,r,sum=0,temp;
	printf("Enter the value num: ");
	scanf("%d", &num);
	temp = num;
	while (num !=0)
		{
		r = num % 10;
		num /= 10;
		sum +=(r*r*r);
		}
	if(sum == temp)
	printf("\n%d is an arm strong no.",temp);
	else
	printf("\n%d is not an armstrong no.\n", temp);

	return 0;
	}
