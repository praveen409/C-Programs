



	#include<stdio.h>

	int isStrong()
	{
	int num,i,f,r,sum=0,temp;
	printf("\nEnter the no:");
	scanf("%d",&num);

	temp=num;
	while(num)
	{	
	i=1; f=1; r=num%10;
		while(i<=r)
		{
		f=f*i; i++;
		}
	sum = sum + f;
	num /= 10;
	}
	if(sum == temp)
	{
	return 1;
	}
	else
	{ 
	return 0;
	}
	}
	



	int main()
	{
	int isStrong();
	if(isStrong()) printf("\nThe value is strong\n");
	else printf("The value is not strong\n");
	return 0;
	}
