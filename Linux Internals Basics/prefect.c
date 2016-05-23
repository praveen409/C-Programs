

	#include<stdio.h>
	int main()
	{
	int i,n,n1,sum,count=0;
	printf("N1= ");
	scanf("%d",&n1);
	for(n=6;count<n1;n++)
	{
		sum=0;
		for(i=0;i<=n1;i++)
			{
			if(n % i == 0)
			sum+=i;
			}
		if(sum ==n)
		printf("\n %d pefect number : %d",++count,n);
	if(count==4)
	break;
	}
	return 0;
	}
