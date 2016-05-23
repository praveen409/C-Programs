#include<stdio.h>
#include<sys/types.h>
int main()
{
int pid;
pid=fork();
if(pid==0)
{
printf("In chaild Process\n");
}
return 0;
}

