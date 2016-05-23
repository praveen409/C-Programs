


	#include<stdio.h>

	int main()
	{
	int num, r, sum, temp, min=0, max=1000;
	printf("\n The armstrong no's are: ");
	
	for (num = min;num<= max; num++)
		{
		temp = num;
		sum = 0;
		while(temp !=0)
			{
			r = temp % 10;
			temp /=10;
			sum += (r*r*r);
			}


		if(sum == num) {
		printf("\n%d",num);
				}
		}
	printf("\n");
	return 0;
	}
