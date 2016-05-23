


	#include<stdio.h>
	int main()
	{
	char str1[100];
	int i;
	
	printf("Enter the string: ");
	scanf("%[^\n]s",str1);
	getchar();

	puts(str1);

	
	printf("\nThe Vovels are : ");

/////// printing vovels looop /////
for(i=0;str1[i] != '\0';i++)
	{
	if(str1[i] =='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u')
		{
		
		str1[i]=str1[i]-32;
		}
	
	}

	puts(str1);
	
	printf("\n");
	return 0;
	}
