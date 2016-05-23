


	#include<stdio.h>
	int main()
	{
	char str1[]="This is Ism University of Skills in Chennai";
	int i;
	puts(str1);

printf("\n");
	printf("The Vovels are : ");

/////// printing vovels looop /////
for(i=0;str1[i] != '\0';i++)
	{
	if(str1[i] =='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'/*)
		{
		
		printf("%c ",str1[i]);
		}
	else if(*/|| str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
		{
		printf("%c ",str1[i]);
		}
	
	}
	printf("\n");
	printf("\nThe consonents are: ");

///// Printing Consonents same loop used//////////
for(i=0;str1[i] != '\0';i++)
	{
	if(str1[i] =='a'|| str1[i]=='e'|| str1[i]=='i'|| str1[i]=='o'|| str1[i]=='u'){}
		
	else if(str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U'){}
	else
	{
	printf("%c ",str1[i]);}
	}
	

	
	printf("\n");
	return 0;
	}
