

	//// WC Command ////


	#include<stdio.h>
	
	int main(int argc, char *argv[])
	{
	FILE *fptr;
	char ch;
	int count=0,n=0,f=0,i,p=0,c=0,q=0,a=0;
	
	fptr = fopen(argv[1], "r");
	
	while((ch = getc(fptr)) != EOF)
		{
			count++;
	
		if(ch == 10)
			{
				n++;
			}
		if(ch == 32)
			{
				f++;
			}
		{
		if((ch <= 'A' && ch >='Z') || (ch <='a'&& ch >= 'z'))
			{
			a++;	
			}
		else if(ch > 47 && ch < 57)
			{
				c++;
			}
		else 	{
			q++;	
			}
		}

		}
/*	fclose(fptr);

	/// Recalling the File to print //////

	fptr = fopen(argv[1],"r");

	while((ch = getc(fptr)) != EOF)
		{
		if(ch == 10){p++;}
		if(p > n-10)
			{
				putchar(ch);
			}
		}
*/

	printf("\nNo of Charecters : %d\n",count);
	printf("No of Lines  : %d\n",n);
	printf("No of Words : %d\n",f);
//	printf("No of A,B,..etc : %d\n",a);
//	printf("No of Numarics : %d\n",c);
//	printf("No of Special Charecters : %d\n",q);
	
	fclose(fptr);
	return 0;
	}
