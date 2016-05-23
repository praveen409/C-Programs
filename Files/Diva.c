

	#include<stdio.h>
	#include<string.h>

	struct Student
	{	
		char batch[20];
		char name[20];
		char phno[20];
	};


	int main()
	{
		char argv[100];
		struct Student s;
		FILE *fp;
		int i,n;

		printf("\n Enter the No of Batchs :");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
		atoi(argv[1]) = i;
		printf("\n Batch : %d",i);
		
		printf("\nEnter the Name:  ");
		scanf("%s",argv[2]);
	
		printf("\n Enter the phno: ");
		scanf("%s",argv[3]);

		fp = fopen("Stu_Rec", "a");


		strcpy(s.batch, argv[1]);
		strcpy(s.name, argv[2]);
		strcpy(s.phno, argv[3]);
		

		fwrite(&s, sizeof(s), 1, fp);
		
		fclose(fp);
		}
		return 0;
	}



