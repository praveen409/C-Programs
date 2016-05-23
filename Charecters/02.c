





	#include<stdio.h>

	int main()
	{

		char ch;

		printf("Enter the alphabet : ");
		ch = getchar();


		if(ch >= 65 && ch <= 90)
		{
			printf("%c eualent is %c\n",ch, ch+32);
		}
		else if(ch >= 97 && ch <= 122)
		{
			printf("%c eualent is %c\n",ch, ch-32);
		}
		else
		{
			printf("Error - It's not alphabet...\n");
		}

		return 0;
	}
