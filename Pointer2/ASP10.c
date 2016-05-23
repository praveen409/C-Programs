

	#include<stdio.h>
	void xstrcopy(char *ptr1,char *ptr2)
	{
	int i=0,n=0;
	
	for(i=0;*(ptr1+i) != '\0';i++)
		{
		n++;
		}

	for(i=0;i < n;i++)
		{
		*(ptr2+i) = *(ptr1+i);
		}	
	
	
	}
		


	int main()
	{
	char str1[100],str2[100];

	printf("\n Enter the string 1: ");
	scanf("%[^\n]s",str1);
	puts(str1);

	
	xstrcopy(str1,str2);

	printf("\n The Second String is : ");
	puts(str2);

	return 0;
	}
