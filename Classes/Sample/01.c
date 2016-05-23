

#include<sys/types.h>
#include<time.h>
#include<stdio.h>

int main()
{
	time_t curtime;

	time(&curtime);

	printf("%s\n", ctime(&curtime));


	return 0;
}



