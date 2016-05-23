
	#include<iostream>
	using namespace std;

	#include "Student.h"


	int main()
	{
		Person *ptr;

		ptr = new Person("Kashif", 19, 'm');

		ptr -> putPerson();

		delete ptr;





		ptr = new Student("Bala", 12, 'M', "B.E.", 3);

		ptr -> putStudent();

		delete ptr;

		return 0;
	}
