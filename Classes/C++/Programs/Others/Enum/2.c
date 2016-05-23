
	#include<stdio.h>
	enum Month
	{
		Jan=1, Feb, Mar, Apr, May=-3, Jun, 
                Jul, Aug, Sep, Oct, Nov, Dec

	};

	struct Date
	{
		int day;
		enum Month month;
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
		struct Person p = {"Varatharajan", 11, Oct, 1990};			
		p.age = 2014 - p.dob.year;

		printf("%s is %d years old....\n", p.name, p.age);

		printf("Date of Birth : %d-%d-%d\n", p.dob.day, 
						     p.dob.month,
					             p.dob.year);
		return 0;
	}
