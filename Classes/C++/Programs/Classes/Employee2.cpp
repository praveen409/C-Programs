


	// Member Function Overloading

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
				strcpy(name, "");
				salary = 0;
	       			strcpy(designation, "");		
			}
	 			

			void setEmployee(char *n, int s, char *d)
			{
				strcpy(name, n);
				salary = s;
				strcpy(designation, d);

			}

			
			void getEmployee()
			{
	
				cout<<"Enter the name : ";
				cin>>name;	
		
				cout<<"Enter the salary : ";
				cin>>salary;

				cout<<"Enter the designation : ";
				cin>>designation;
	
			}




			void putEmployee()	
			{
				cout<<"Name	: "<<name<<"\n";
				cout<<"Salary	: "<<salary<<"\n";
				cout<<"Designation : "<<designation<<"\n";
			}

	};



	int main()
	{
		Employee e1, e2, e3;

		e1.setEmployee();
		e1.putEmployee();
	

		e2.setEmployee("Balamurugan", 18000, "Designer");
		e2.putEmployee();


		e3.getEmployee();
		e3.putEmployee();

		return 0;
	}
