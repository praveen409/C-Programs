
	// Binary to Decimal //

	#include<stdio.h>
	#include<math.h>
	int num,j=0,i,temp=0,N[100],rem=0,dev=0,k=1;
	int main()
	{

	printf("\nEnter the binaary value: ");
	scanf("%d",&num);
	for(i=0;num!=0;i++)
		{
		temp = num % 10;
		N[i] = temp;
		k=k*2;
		j++;
		num /= 10;
		}
/*	for(i=--j ;i>=0;--i)
		{
		printf("N[%d] ==> %d\n",i,N[i]);

		}*/
	for(i=j;i>=0;--i)
		{
			
		rem = (N[i] * pow(2,i));
		dev = dev + rem;
		
		}
	printf("\n%d is the decimal.\n",dev);
	
		
	
	
	return 0;
	}
