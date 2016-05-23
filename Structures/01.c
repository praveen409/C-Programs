




/*

	Structures in C:
	================

	- Structures are group of members with different datatypes.

	- Structures is a user - defined datatype.
	




	Array:
	======

	- Collection of elements of simialar datatype */

	#include<stdio.h>

	struct Person
	{
		char name[20]; 

		int age;

		char gender;
	};



	int main()
	{
		struct Person p1 = {"Theja", 23, 'M'};


		printf("Name	: %s\n", p1.name);
		printf("Age	: %d\n", p1.age);
		printf("Gender	: %c\n", p1.gender);


		return 0;
	}




























