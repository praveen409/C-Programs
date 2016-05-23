


	#include<stdio.h>
	int main()
	{
	char str1[100],str2[100],str3[100],str4[400];
	int i=0,j=0,k=0,temp=0;

	printf("\nEnter the string1 ");
	scanf("%[^\n]s",str1);
	getchar();

	printf("\nEnter the string2 ");
	scanf("%[^\n]s",str2);
	getchar();
	
	printf("\nEnter the string3 ");
	scanf("%[^\n]s",str3);
	getchar();

	while(str1[i] != '\0')
		{
		str4[j]=str1[i];
		j++;k++;
		i++;temp++;
		}
	i=0;
	str4[j++]=' ';
	while(str2[i] != '\0')
		{
		str4[j]=str2[i];
		j++;k++;
		i++;temp++;
		}
	i=0;
	str4[j++]=' ';
	while(str3[i] != '\0')
		{
		str4[j]=str3[i];
		j++;k++;
		i++;temp++;
		}
	str4[j] = '\0';

//	printf("\ntemp = %d\nj = %d\nk = %d\ni= %d\n",temp,j,k,i);

	printf(" %s ",str4);
		
		
	printf("\n");
	return 0;
	}
