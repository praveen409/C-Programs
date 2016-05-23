


	#include<stdio.h>

	int main()

	{
	int a;
	printf("\nEnter the no");
	scanf("%d",&a);
	
	if(a>= -9 && a<=9)
	{
		printf("\nYou entered single digit\n");
	}
	else if(a>10 && a<100)
	{
		printf("\n You entered Double digit\n");
	}
	else if(a>99 && a<1000)
	{
		printf("\nYou entered Triple digit\n");
	}
	else
	{
		printf("Error- May be you entered more digits\n Sorry\n BAY\n");
	}
	

	return 0;

	}
