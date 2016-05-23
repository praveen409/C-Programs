




	#include<iostream>
	using namespace std;


	struct Date
	{
		int day;
		char month[20];
		int year;
	};

	struct Person
	{
		char name[20];
		Date dob;
		int age;
	};


	int main(int argc, char *argv[])
	{
		Person p={"Rohit", 14, "Jan", 1992};

		p.age = 2014 - p.dob.year;
		
		cout<<p.name<<" is "<<p.age<<" years old....\n";

		return 0;	
	}
