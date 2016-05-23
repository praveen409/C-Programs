



	#include<stdio.h>
	char ch;

	char valueat(char *ptr,int Index)
	{
	
	ch = *(ptr+Index);

	return ch;
	}
	
	
	int main()
	{
	int Index;
	char str[100];
	
	
	printf("\nEnter the String :");
	scanf("%[^\n]s",str);

	puts(str);
	
	printf("\nEnter the Index Value:");
	scanf("%d",&Index);
	
	valueat(str,Index);

	printf("\n The char is %c\n",ch);
	
	return 0;
	}
