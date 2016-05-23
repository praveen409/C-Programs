

	#include<stdio.h>

	int main(int argc, char *argv[])
	{
		FILE *fp;
		char ch;

		fp = fopen(argv[1], "w");

		while((ch = getchar())!='*')
		{
			putc(ch, fp);
		}

		fclose(fp);

		return 0;
	}
