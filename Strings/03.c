




	#include<stdio.h>
	int main()
	{
	char str1[]="This is Ism university Of skills:";
	int i,count =0;
	for(i=0;str1[i]!='\0';i++)
	{
	if(str1[i]==32)
	{
	count++;
	}
	}
	
	printf("\nThe spaces are :%d",count);
	printf("\n");

	}
