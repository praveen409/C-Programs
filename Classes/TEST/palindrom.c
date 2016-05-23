

	#include<stdio.h>	
	#include<string.h>



	void xstrrev(char str[])
	{
	int i, j, length = 0;
	char temp;		

		for(i = 0; str[i] != '\0'; i++)	
			{
				length++;
			}
		
			j = length - 1;

			i = 0;

			while(i <= j)
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;

				i++;
				j--;
			}

	}	


	int main()
	{
	char str[10]="MADAM",str1[10];

	strcpy(str1,str);
	
	puts(str);

	xstrrev(str1);
	
	if(strcmp(str,str1))
	{
	printf("\nThe String is palindrom\n");
	}
	else
	{
	printf("\n The string is not a palindrom\n");
	}
	puts(str1);
	
	return 0;;
	}
