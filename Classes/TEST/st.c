

	#include<stdio.h>
	
	int i,num,f,r,sum,temp,max,min;
	void strong(int min,int max)
	{
	for(num=min;num <= max;num++)
	{
	temp = num;
	sum =0;
	while(temp)
		{
		i=1; f=1;
		r = temp % 10;
		while(i<=r)
			{
				f=f*i;
				i++;
			}
		sum=sum+f;
		temp /= 10;
		}
	if(sum == num)
	{
	printf(" %d ",num);
	}
	}
	}



	int main()
	{

	int i,num,f,r,sum,temp,max,min;
	min = 1;
	max = 1000;

	strong(min,max);

	printf("\n");
	return 0;
	}
	
