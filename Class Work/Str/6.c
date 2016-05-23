


	// Nested Structure

	#include<stdio.h>


	struct Date
	{
		int day;
		char month[20];
		int year;	
	};



	struct Employee
	{
		char name[20];
		struct Date doj;
		int salary;
	};


	int main()
	{
		struct Employee emp1 = {"Gopi", 22, "May", 2014, 20000};
		
		printf("Name : %s\n", emp1.name);

		printf("Date of Joining : %d %s %d\n", emp1.doj.day, 
						       emp1.doj.month, 
                                                       emp1.doj.year);

		printf("Salary : %d\n", emp1.salary);

		

		return 0;
	}
