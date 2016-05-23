

	#include<stdio.h>
	int main()
	{
	char ch;
	ch = getchar();
	if(isdigit(ch))
		{
		printf("%c is a digit",ch);
		}
	else{ printf("%c is not a Digit",ch);}
	printf("\n");	
	return 0;
	}
