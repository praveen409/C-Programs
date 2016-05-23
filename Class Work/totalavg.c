

	#include<stdio.h>

	int main()
	{
	
	int M, P, C, Total;
	
	float Avg;
	
	printf("\nEnter the Marks of Maths, Physics, Chemistry:\n\t");
	
	scanf("%d%d%d", &M, &P, &C);
	
	Total = M + P + C;

	printf("The total is: %d\n\n\n",Total);

	Avg = Total / 3;

	printf("Avg for enterd marks is: %.2f\n\n\n",Avg);

	return 0;

	}
