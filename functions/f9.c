


	#include<stdio.h>
	int factorial(int no)
	{
	int i;
	int f=1;


	
		for(i=no;i!=0;i--)
		{
		f = f * i;
		
		}

		printf("The %d's factoreal is %d\n",no ,f);
	
	}


	int main()
	{
	int no;	
	
	printf("Enter the n value  ");
	
	scanf("%d", &no);

	factorial(no);
	
	
	return 0;
	}
