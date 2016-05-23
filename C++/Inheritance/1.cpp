
	


	#include<iostream>
	using namespace std;

	class Person
	{
		private:
			char name[20];
			int age;
			char gender;
			char phone[12];

		public:

			void getPerson()
			{
				cout<<"Enter the name : ";
				cin>>name;

				cout<<"Enter the age : ";
				cin>>age;
	
				cout<<"Enter the Gender : ";
				cin>>gender;
	
				cout<<"Enter the phone : ";
				cin>>phone;
			}

			void putPerson()
			{
				cout<<"Name : "<<name<<"\n";
				cout<<"Age  : "<<age<<"\n";
				cout<<"Gender: "<<gender<<"\n";
				cout<<"Phone: "<<phone<<"\n";
			}
	};


	class Employee : private Person
	{
		private:
			int id;
			int salary;
					
		public:
			void getEmployee()
			{
				getPerson();

				cout<<"Enter the id : ";
				cin>>id;

				cout<<"Enter the salary : ";
				cin>>salary;
			}


			void putEmployee()
			{
				putPerson();

				cout<<"ID	: "<<id<<"\n";
				cout<<"Salary   : "<<salary<<"\n";
			}
	};



	


















	int main()
	{
		Employee e;

		e.getEmployee();

		e.putEmployee();

		return 0;
	}	























