

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	
	struct emp
	{
		int id;
		char name[20];
		char email[20];
	};

	int main()
	{
	FILE *fp,*ft;
	char another,choice;
	struct emp e;
	int empid;
	long int recsize;
	
	fp = fopen("EMP.DAT","rb+");
	if(fp == NULL)
	{
	fp = fopen ("EMP.DAT","r+");
	
	 if(fp == NULL)
		{
		puts("Cannot open file");
		exit(1);
		}
	
	}
	
	recsize = sizeof(e);
	
	while(1)
		{
		printf("1. Add Records\n");
		
		printf("2. List Records\n");

		printf("3. Modify Records\n");

		printf("4. Delete Records\n");

		printf("0. Exit\n");

		printf("Your Choice: ");
//		fflush(stdin);
		choice = getchar();
		
		switch(choice)
			{
			case'1':
				fseek(fp,0,SEEK_END);
				another = 'Y';
				while(another == 'Y')
				{
					printf("Enter ID NAME EMAIL\n");
					scanf("%d%s%s",&e.id,e.name,e.email);
					fwrite(&e,recsize,1,fp);
					printf("\nAdd another Record (Y/N) ");
				//	fflush(stdin);
					another = getchar();
				}
				break;

			case '2':
				rewind(fp);
				while(fread(&e,recsize,1,fp) == 1)
				{
					printf("\n%d%s%s",e.id,e.name,e.email);
				}
				break;
			
			case '3':
				another ='Y';
				while(another == 'Y')
					{
					printf("\n Enter the id to modify: ");
					scanf("%d",&empid);
					rewind(fp);
					while(fread(&e,recsize,1,fp) == 1)
						{
						if(e.id == empid)
							{
							printf("\n Enter new id,name &email:");
							scanf("%d%s%s",&e.id,e.name,e.email);
							fseek(fp,-recsize,SEEK_CUR);
							fwrite(&e,recsize,1,fp);
							break;
							}
						}
					printf("\nModify another Record (Y/N):");
				//	fflish(stdin);
					another = getchar();
					}
				break;
			
			case '4':
				break;
	
			case '0':
				fclose(fp);
				exit(0);
		}
		}
		return 0;
		}

