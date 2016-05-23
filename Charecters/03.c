


	#include<stdio.h>
	int main()
	{
	char ch;
	ch = getchar();
	if (ch >=48 && ch<=57){
	printf("%d is ascii for %c\n",ch,ch);
	}else{printf("Error You entered wrong input\n");}
	}
