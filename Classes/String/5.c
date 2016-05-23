



	#include<stdio.h>


	int main()
	{
	

		char text[] = "PrograM%#$%Ming LanGuage";

		int i;
		

		puts(text);


		i = 0;

		while(text[i] != '\0')
		{
			if(text[i] >= 97 && text[i] <= 122)
			{

				text[i] = text[i] - 32;
			}
			


			i++;
		}
		


		puts(text);

	

		return 0;
	}
