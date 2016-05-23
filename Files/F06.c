

	//// To delete Record Command ////


	#include<stdio.h>


	struct Student
	{
		int id;
		char name[20];
		char email[20];
	};

	
	int main(int argc, char *argv[])
	{
	struct Student s;

	FILE *fptr1;
	FILE *fptr2;
	char ch;

	int count=0,n=0,f=0,i,p=0,sh;

	sh = atoi(argv[2]);

	printf("ID\tNAME\tEMAIL\n\n");
	printf("===========================");

	fptr1 = fopen(argv[1], "r");
	fptr2 = fopen("Theja.txt", "w");



	while((ch = getc(fptr1)) != EOF)
		{
			if(ch != sh)
			{
			putc(ch,fptr2);}
		}

		
	fclose(fptr1);

	fclose(fptr2);


	return 0;

	}
