


	#include<stdio.h>
	void xstrcount(char *ptr1, int *ptr2, int *ptr3, int *ptr4)
	{
	
	int i=0,n=0,c=0;
	
	
	*ptr3 = 0;
	*ptr4 = 0;
	
	for(i=0;*(ptr1+i) != '\0';i++)
		{
		c++;
		
		}
	*ptr2 = c;
	
//	printf("\n The n: %d",n);
	

	for(i=0;*(ptr1+i) != '\0';i++)
		{
	if((*(ptr1+i)) == 'a'||
	 (*(ptr1+i)) == 'e'||
	 (*(ptr1+i)) == 'i'||
	 (*(ptr1+i)) == 'o'||
	 (*(ptr1+i)) == 'u'||
	 (*(ptr1+i)) == 'A'||
	 (*(ptr1+i)) == 'E'||
	 (*(ptr1+i)) == 'I'||
	 (*(ptr1+i)) == 'O'||
	 (*(ptr1+i) == 'U'))
		{
		 *ptr3 += 1;
		}
	else
		{
		*(ptr4) += 1;
		}
		
		}
	}
		


	int main()
	{
	char str1[100];
	int a,b,c;

	printf("\n Enter the string : ");
	scanf("%[^\n]s",str1);
	puts(str1);

	
	xstrcount(str1, &a, &b, &c);

	printf("\nNo.Of Letters   = %d",a);
	printf("\nNo.Of Vovels    = %d",b);
	printf("\nNo.Of Consonents= %d",c);
	printf("\n");

	return 0;
	}
