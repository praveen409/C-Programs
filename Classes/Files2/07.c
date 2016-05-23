	



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

		fp = fopen(".record", "r");


		printf("ID\tName\tEmail\n\n");		

		while(fread(&s, sizeof(s), 1, fp))
		{

	 	 printf("%d\t%s\t%s\n", s.id, s.name, s.email);

		}

		printf("\n=================================\n");

		fclose(fp);
	
		return 0;
	}
