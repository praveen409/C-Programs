


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
			{
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

		Person p1("Kashif", 19, 'M');

		Person *ptr;

		ptr = &p1;


		ptr -> putPerson();

		return 0;
	
	}
