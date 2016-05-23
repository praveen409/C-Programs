


	// Binary to Decimal //

	#include<stdio.h>
	#include<math.h>
	
	
	int num,j=0,i,temp=0,N=0,rem=0,dev=0,x,s=1;
	int main()
	{

	printf("\nEnter the binary value: ");
	scanf("%d",&num);

	while(num!=0)
		{
		
		temp = num % 10;
		if(temp==1 || temp==0)
		{
			N = N + temp*s;
			s=s*2;
	//		j++;
			num /= 10;
		}else{ printf("\n==You Entered Wrong Input==\n"); return 0;}
		
		}
	printf("%d is the decimal.\n",N);


/*	for(i=--j ;i>=0;--i)
		{
		printf("N[%d] ==> %d\n",i,N[i]);

		}*/
/*	for(i=j;i>=0;--i)
		{
		x=pow(2,i);
		rem = (N[i] * x);
		dev = dev + rem;
		
		}
	printf("\n%d is the decimal.\n",dev);
	
*/		
	
	
	return 0;
	}
