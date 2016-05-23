
	#include<iostream>
	#include<string.h>
	using namespace std;


	class Employee
	{

		private:
			char name[20];
			int salary;
			char designation[20];

		public:

			void setEmployee()
			{
				strcpy(name, "Kashif");
				salary = 12000;
				strcpy(designation, "Programmer");					}
			
			void putEmployee()	
			{
				cout<<"Name	: "<<name<<"\n";
				cout<<"Salary	: "<<salary<<"\n";
				cout<<"Designation : "<<designation<<"\n";
			}

	};



	int main()
	{
		Employee e1;

		e1.setEmployee();
		e1.putEmployee();
	
		return 0;
	}
