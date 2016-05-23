



	#include<stdio.h>
	int main()
	{
	char str[100];int i;
	printf("Enter the string \n")
	scanf("%[^\n]s",str[]);
	puts(str);
	
	for(i=0;i!='\0';i++)
	{
	if(str[i]==32)
	{
	printf(" %d is the location of space\n",str[i]);
	}
	}
	return 0;
	}
