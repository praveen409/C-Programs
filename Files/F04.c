

	//// Remove All Special Charecters in File -->> Command ////


	#include<stdio.h>
	
	int main(int argc, char *argv[])
	{
	FILE *fptr;
	char ch;
	
	
	int count=0,n=0,f=0,i,p=0,c=0,q=0,a=0;
	
	fptr = fopen(argv[1], "r");

	while((ch = getc(fptr)) != EOF)
		{
		if((ch >= 'A' && ch <='Z') || (ch >='a'&& ch <= 'z'))
			{ putchar(ch);}
		else if(ch >= 48 && ch <= 57)
			{ putchar(ch);}
		else if(ch == 10)
			{ putchar(ch);}
		
		}


	fclose(fptr);

	return 0;
	}
