
	#include<stdio.h>
	int isArmstrong(int n)
	{
	int num = n,r,sum=0,temp;
	
	for(temp=num;num!=0;num=num/10)
	{
	r = num % 10;
	sum = sum + (r*r*r);
	}
	if(sum == temp){return 1;}
	else { return 0;}

	}



	int main()
	{
	int n;
	printf("\nEnter The value");
	scanf("%d",&n);
	if(isArmstrong(n))
	{
	printf("The value is armstrong\n");
	}
	else printf("The value is not armstrong\n");


	return 0;
	}


