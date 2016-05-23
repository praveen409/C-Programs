


	#include<stdio.h>
	int main()
	{
	int i, no;
	int f=1;

	printf("Enter the n value");
	scanf("%d", &no);
	for (i=1; i <= no ; i++)
		{
		f = f * i;
		
		printf("The %d's factoreal is %d\n",i ,f);
		
		}

	return 0;
	}
