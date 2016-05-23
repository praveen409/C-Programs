


	#include<stdio.h>
	#include<string.h>
	int main()
	{
	char str1[100],temp;
	int i,j=0;
	
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);
	getchar();

	puts(str1);


	for(j = 0; j <= strlen(str1); j++)
	{
	for(i =0;i<= strlen(str1);i++)
	{
		if(str1[i] < str1[i+1])
		{
			temp = str1[i];//t=t
			str1[i] = str1[i+1];//h
			str1[i+1]=temp;//t
		}
	
	}
	
	}


	puts(str1);
	
	printf("\n");
	return 0;
	}
