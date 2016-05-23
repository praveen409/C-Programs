


	#include<stdio.h>
	int main()
	{
	char str1[100],str2[100];
	int i;
	
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);
	getchar();

	puts(str1);

	

	for(i = 0; str1[i] != '\0'; i++)
		{	
		str2[i]=str1[i];
		}
	
	

	puts(str2);
	
	printf("\n");
	return 0;
	}
