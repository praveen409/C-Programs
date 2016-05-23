

	#include<stdio.h>
	#include<string.h>

	struct Student
	{	
		int id;
		char name[20];
		char email[20];
	};


	int main(int argc, char *argv[])
	{
		struct Student s;
		FILE *fp;

		fp = fopen(".record", "a");


		s.id = atoi(argv[1]);
		strcpy(s.name, argv[2]);
		strcpy(s.email, argv[3]);
		

		fwrite(&s, sizeof(s), 1, fp);

		fclose(fp);
	
		return 0;
	}
