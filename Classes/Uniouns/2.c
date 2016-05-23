







	#include<stdio.h>

	struct person
	{
	        char name[20];
		int age;
		char gender;
	};
	
	int main()
	{
		struct person p1 = { "mohan", 21, 'M'};
		
		printf("name   = %s\n", p1.name);
		
		printf("age    = %d\n", p1.age);

		printf("gender = %c\n", p1.gender);
		
	
		return 0;
	
	}
