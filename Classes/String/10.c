



	#include<stdio.h>
	#include<string.h>

	int main()
	{
		char str1[] = "HELLO";
		char str2[] = "hello";
		int n;


		n = stricmp(str1, str2);

		printf("%d\n", n);

		
		

		return 0;
	}
