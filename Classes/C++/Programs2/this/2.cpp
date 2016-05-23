





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

		Person p1;    
		Person *ptr;

		ptr = &p1;


		ptr -> setPerson("Youraj", 23);

		

		ptr -> printPerson();


		cout<<"Ptr : "<<ptr;

		return 0;
		
	}
