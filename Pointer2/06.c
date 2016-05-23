







	#include<stdio.h>


	void xstrrev(char *ptr)
	{
		int i, j, length = 0;
		char temp;


		/* to find the length */
		i = 0;

		while(*(ptr + i) != '\0')
		{
			length++;
			i++;
		}
		

			
		/* reversing the string. */
		i = 0;	
		j = length - 1;

		while(i <= j)
		{
			temp = *(ptr + i);				
			*(ptr + i) = *(ptr + j);
			*(ptr + j) = temp;

			i++;
			j--;
		}


	}



	int main()
	{
		char str[100];


		printf("Enter the string : ");
		scanf("%[^\n]s", str);
	

		puts(str);
	
		xstrrev(str+5);
		
		puts(str);

		return 0;
	}

