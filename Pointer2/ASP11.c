

	#include<stdio.h>
	void xstrrev(char *ptr1)
	{
	char temp=0;
	int i=0,n=0,j=0;
	
	for(i=0;*(ptr1+i) != '\0';i++)
		{
		n++;
		}
	n = n-1;
	for(i=0;i < n;i++,n--)
		{
		temp = *(ptr1+i);
		*(ptr1+i) = *(ptr1+n);
		*(ptr1+n) = temp;	
		}
	
	}
		


	int main()
	{
	char str1[100];

	printf("\n Enter the string 1: ");
	scanf("%[^\n]s",str1);
	puts(str1);

	
	xstrrev(str1);

	printf("\n The Reverse String is : ");

	puts(str1);

	return 0;
	}
