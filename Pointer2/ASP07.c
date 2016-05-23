
	#include<stdio.h>
	void xstrupr(char *ptr)
	{
	int i=0;
	
	for(i=0;*(ptr+i) != '\0';i++)
	{
	if(*(ptr+i) >= 97 && *(ptr+i) <= 122)
	{
	*(ptr+i) = *(ptr+i) - 32;
	}
/*	else if (*(ptr+i) < 65 && *(ptr+i) > 90)
	{
	*(ptr+i) -= 32;
	}*/
	}

	}
	int main()
	{
	char str[] = "Programming language";

	puts(str);

	xstrupr(str);

	puts(str);
	
	return 0;
	}
