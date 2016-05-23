

	//// Tail Command ////


	#include<stdio.h>
	
	int main(int argc, char *argv[])
	{
	FILE *fptr;
	char ch;
	int count=0,n=0,f=0,i,p=0;
	
	fptr = fopen(argv[1], "r");
	
	while((ch = getc(fptr)) != EOF)
		{
			count++;
	
		if(ch == '\n')
			{
				n++;
			}
		if(ch == ' ')
			{
				f++;
			}
		}
	fclose(fptr);

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


/*	printf("\nNo of Charecters : %d\n",count);
	printf("No of Lines  : %d\n",n);
	printf("No of Words : %d\n",f);
*/	
	fclose(fptr);
	return 0;
	}
