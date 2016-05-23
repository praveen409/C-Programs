





	#include<stdio.h>

	int main()
	{		
		int marks[5], total=0, index, flag = 0;
		float avg;


		printf("Enter 5 marks : ");
		
		for(index = 0; index < 5; index++)
		{
			scanf("%d", &marks[index]);
		}




		for(index = 0; index < 5; index++)
		{
			total = total + marks[index];
		}


		printf("Total Marks = %d\n", total);

		avg =(float) total / 5;

		printf("Average  = %.2f\n", avg);


		
		for(index = 0; index < 5; index++)
		{
			if(marks[index] < 40)
			{
				flag = 1;
				break;
			}
		}


		if(flag == 0)
		{
			printf("Pass........\n");
		}
		else
		{
			printf("Fail.........\n");
		}


		return 0;
	}
