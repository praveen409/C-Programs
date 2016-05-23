





	#include<iostream>
	#include<cstring>

	using namespace std;


	class Person
	{

		public:
			char name[20];
			int age;

			void setPerson(char *name, int age)
			{
				strcpy(this->name, name);
				this->age = age;
			}


			void printPerson()
			{
				cout<<"Name : "<<name<<" "<<"Age : "<<age<<"\n";
			}

	};


	int main()
	{


		
		Person *ptr;

		ptr = new Person;

		ptr -> setPerson("Youraj", 23);		

		ptr -> printPerson();

		delete ptr;
		

		return 0;
		
	}
