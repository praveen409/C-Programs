





	#include<iostream>
	#include<cstring>
	using namespace std;



	class Person
	{
		private:
			char name[20];
			int age;
			char gender;

		public:
			void setPerson(char n[], int a, char g)
			{
				strcpy(name, n);
				age = a;
				gender = g;
			}
		

			void putPerson()
			{
				cout<<"Name		: "<<name<<"\n";
				cout<<"Age		: "<<age<<"\n";
				cout<<"Gender		: "<<gender<<"\n";
			}
	};


	class Employee : private Person
	{
		private:
			int id;
			char desig[20];
			int salary;

		public:
	
			void setEmployee(char n[], int a, char g,
					 int i, char d[], int s) 
			{
				setPerson(n, a, g);


				id = i;
				strcpy(desig, d);
				salary = s;
			}


			void putEmployee()
			{
				putPerson();

				cout<<"ID		: "<<id<<"\n";
				cout<<"Designation	: "<<desig<<"\n";
				cout<<"Salary		: "<<salary<<"\n";  
			}

	};

	


	int main()
	{


		Employee e1;

		e1.setEmployee("Elavarasan", 22, 'M', 102, "Developer", 22500);

		// e1.setPerson("Elavarasan", 22, 'F');

		e1.putEmployee();

		return 0;
	}



