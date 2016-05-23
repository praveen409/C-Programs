
	// To print strong no


	#include<stdio.h>

	int main()
	{
	int num, i, f, r, sum, temp;
	

	for (num=1; num<=1000; num++ )
	{
	temp = num;
	sum = 0;
	while(temp)
		{
		i=1; f=1;
		r = temp % 10;
		
		while(i <= r)
			{
			f=f*i; i++;
			}
		sum += f; temp /= 10;
		}
	if(sum == num)
	printf(" %d \n", num);
	
	}																				return 0;
	}
