



	#include<stdio.h>
	

	char *substring(char *ptr1,int min,int max)
	{
	char *ptr2,ch,str2[100];
	int i,j=0;
	for(i = min,j=0;i >= min && i <= max;i++,j++)
	{
	*(ptr2+j) = *(ptr1+i);
	
	}

/*   ///////////////////////////

	for(i = min,j=0;i >= min && i <= max;i++,j++)
	{
	str2[j] = *(ptr1+i);
	}
	return &str2;

//////////////////////////////////////  */

	return ptr2;
	}


/////////////////// MAIN FUNCTION /////////////////////

	int main()
	{
	char str1[]="This is Thejeswarareddy",str2[20];
	int min,max;
	printf("Enter the Min : ");
	scanf("%d",&min);
	printf("Enter the Max : ");
	scanf("%d",&max);
	
//	*substring(str1,min,max);
	
	str2[20] = *substring(str1,min,max);
	
	printf("%s",str2);

	printf("\n");
	return 0;
	}

