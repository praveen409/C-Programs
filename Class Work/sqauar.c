



	#include<stdio.h>
	#include<math.h>
	int main()
	{

	int a, i;
		printf("\na,i==");
		scanf("%d%d",&a,&i);
		printf("\nThe options\n 1. Square\n 2. cube\n");
	switch (i)
		{
		case 1:
			a = a * a;
			printf("\nsquare=%d",a);
			break;
		case 2:
			a = a * a * a;
			printf("\ncube=%d",a);
			break;
		default :
			printf("\nError Input");

		
		}
		printf("the \n");
	return 0;
	}
