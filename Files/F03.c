

	//// CP Command ////


	#include<stdio.h>
	
	int main(int argc, char *argv[])
	{
	FILE *fptr1;
	FILE *fptr2;
	char ch,sh;

	int count=0,n=0,f=0,i,p=0;
	
	fptr1 = fopen(argv[1], "r");
	fptr2 = fopen(argv[2], "w");
	

	while((ch = getc(fptr1)) != EOF)
		{

			putc(ch,fptr2);
		}

		
	fclose(fptr1);

	fclose(fptr2);

	return 0;

	}
