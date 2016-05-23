


	#include<iostream>
	#include<string.h>
	using namespace std;


	class Person
	{		
		private:
			int age;
			char gender;
			char name[20];


		public:

			Person(char *n, int a, char g)
i			{
				strcpy(name, n);
				age = a;
				gender =g;
			}

			void putPerson()
			{
				cout<<name<<" "<<age<<" "<<gender<<"\n";
			}
	};


	int main()
	{


		Person *ptr;

		ptr = new Person("Balamurugan", 17, 'm');

		ptr -> putPerson();

		delete ptr;

		return 0;
	
	}
