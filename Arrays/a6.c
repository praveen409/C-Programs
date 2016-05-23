


	#include<stdio.h>
	int main()
	{
	long int DN, rem, qut;
	int octno[100], i=1, j;

	printf("\nEnter any Decimal NO;");
	scanf("%ld",&DN);

	qut = DN;

	while(qut!=0)
		{
		octno[i++] = qut%8;
		qut = qut/8;
		}

	printf("Octal Eqaulent no is %ld\n",DN );

	for(j=i-1;j>0;j--)
		{
		printf("%d",octno[j]);
		}
	
	printf("\n");
	
	return 0;
	}
