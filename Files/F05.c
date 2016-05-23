

	//// Remove All Comments in File -->> Command ////


	#include<stdio.h>
	
	int main(int argc, char *argv[])
	{
	FILE *fptr;
	char ch;
	int count=0,n=0,f=0,i,p=0,c=0,q=0,a=0;
	
	fptr = fopen(argv[1], "r");

	while((ch = getc(fptr)) != EOF)
		{
		if(ch =='/')
			{
			ch = getc(fptr);
			if(ch == '/')
				{
				continue;
				}
			else if(ch == '*')
				{
				
				}
			}
	

		}
		
	fclose(fptr);
	return 0;
	}
