






	#include<stdio.h>

	int main()
	{
		char str1[100], str2[100];
		int length = 0, i, j;

		
		printf("Enter the string : ");
		scanf("%[^\n]s", str1);       



		i = 0;
		while(str1[i] != '\0')
		{	
			length++;
			i++;
		}




		j = length-1;
		i = 0;
		while(j >= 0)
		{
			str2[i] = str1[j];
			i++;
			j--;
		}

		str2[i] = '\0';


		printf("Original String : %s\n", str1);
		printf("Reversed String : %s\n", str2);

		return 0;
	}
