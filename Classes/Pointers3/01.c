





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


		ptr =  (struct Person *)malloc(sizeof(struct Person));

		
		printf("Enter the name : ");
		scanf("%s", ptr -> name);

		printf("Enter the age : ");
		scanf("%d", &ptr -> age);

		getchar();

		printf("Enter the gender : ");
		scanf("%c", &ptr -> gender);



		printf("%s\t%d\t%c\n", ptr->name, ptr->age, ptr->gender);

		free(ptr); // Memory Leak

		ptr = NULL;  // Dangling Pointer
		


		return 0;
	}




