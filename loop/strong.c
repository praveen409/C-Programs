



	#include<stdio.h>

	int main()
	{
	int num, i, f, r, sum = 0, temp;
	printf("\nEnter the no:");
	scanf("%d", &num);
	temp = num;
	while(num)
		{
		i=1; f=1;
		r = num % 10;
		
		while(i<=r)
			{
			f=f*i; i++;
			}
		sum += f; num /= 10;
		}
	if(sum == temp)
	printf("%d is strong no.\n", temp);
	else
	printf("%d is not strong no.\n", temp);
	
	return 0;
	}
