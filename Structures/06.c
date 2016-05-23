



	#include<stdio.h>

	struct Date
	{	
		int day;
		char month[20];
		int year;
	};



	struct Person 
	{
		char name[20];
		struct Date dob;
		int age;
	};



	int main()
	{

		struct Person p = {"Rahul", 25, "July", 1994};


		printf("Name		: %s\n", p.name);
		printf("Date of Birth   : %d / %s / %d\n",

					p.dob.day,
					p.dob.month,
					p.dob.year );

		p.age = 2014 - p.dob.year;		

		printf("Age		: %d\n", p.age);

		return 0;
	}





