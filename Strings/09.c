


	#include<stdio.h>
	int main()
	{
	char str1[100];
	int i;
	
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);
	getchar();

	puts(str1);

	

	for(i = 0; str1[i] != '\0';i++)
	{
		if(str1[i]>=65 && str1[i]<=90)
		{
		str1[i] += 32;
		}
		else if (str1[i]>=97 && str1[i]<=122)
		{
		str1[i] -= 32;
		}
	
	}
	

	puts(str1);
	
	printf("\n");
	return 0;
	}
