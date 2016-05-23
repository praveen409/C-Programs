





	#include<stdlib.h>
	#include<stdio.h>


	struct Person
	{
		char name[25];
		int age;
		char gender;
	};



	int main()
	{
		struct Person *ptr;
		int i,n;

		printf("Enter the number of Persons : ");
		scanf("%d", &n);

		ptr =  (struct Person *)calloc(n, sizeof(struct Person));

		for(i = 0; i < n; i++)
		{
			printf("Enter the name : ");
			scanf("%s", (ptr+i)->name);

			printf("Enter the age : ");
			scanf("%d", &(ptr+i) -> age);

			getchar();

			printf("Enter the gender : ");
			scanf("%c", &(ptr+i) -> gender);
		}


		printf("Name\tAge\tGender\n");
		printf("==================================\n");

		for(i = 0; i < n; i++)
		{
			printf("%s\t%d\t%c\n", (ptr+i)->name, 
						(ptr+i)->age, 
						(ptr+i)->gender);
		}

		free(ptr); // Memory Leak

		ptr = NULL;  // Dangling Pointer
		


		return 0;
	}




