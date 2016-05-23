



	#include<stdio.h>
	int i;

	int indexof(char *ptr,char *ptr1)
	{
	int n=0;
	for(n=0;*(ptr+n) != '\0';n++)
		{
		i++;
		if((*ptr+n) == *ptr1);
		{
		return i;
		}
		}

	

	}

	int main()
	{
	char str[]="Apple";
	char ch;

	puts(str);
	
	printf("\n Enter the charecter position you need : ");
	scanf("%c",&ch);

	indexof(str, &ch);

	printf("The '%c' Index Value is : %d\n",ch,i);

	return 0;
	}
