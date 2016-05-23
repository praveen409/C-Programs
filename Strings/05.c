





	#include<stdio.h>
	int main()
	{
	char str[100];
	int i;
	
	printf("Enter the string :  ");
	scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
	str[i]++;	
	}
	printf(" The next letter string  ");
	puts(str);printf("\n");
	
	return 0;
	}
