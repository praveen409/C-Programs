#include<stdio.h>
#include<sys/types.h>
int main()
{
printf("\n\n\tBefore Forking\n\n");
fork();
printf("\tAfter Forking\n\n");
return 0;
}
