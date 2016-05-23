






	#include<stdio.h>


	int main()
	{
		char str1[100];

		int n, i=0, j=0,temp=0,count=0;

		
		printf("Enter the string : ");
		scanf("%[^\n]s", str1);       

		for(i=0;str1[i]!='\0';i++)
		{
                        count++;
	        }
                j=count-1;
             
	        for(i=0;i<j;i++)
		{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
		j--;
		}

		printf("%s ",str1);
		printf("\n");
		return 0;
	}
