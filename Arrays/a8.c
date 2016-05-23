


	#include<stdio.h>
	#include<math.h>
	int i;
	int main()
	{
	int dec,num,hex=0,hexa[100],c=0;
	printf("\nEnter the decimal value "); 
	scanf ("%d",&num);
	
//	printf("Hexa Value is = ");
	
	if(num != 0)
		{
		for(i=0;num>0;i++)
		{
			hex = num % 16;
			
			hexa[i]=hex;
			num /= 16;
			c++;	
//			printf("%d\n",hexa[i]);
		}	
		}
	
		printf("\nhexa=> ");

		for(i = --c;i>=0;--i)
		{


		switch(hexa[i])
			{
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default: printf("%d", hexa[i]);
			}		

		}
		printf("\n");
		
	



	return 0;
	}
