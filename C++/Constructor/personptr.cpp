


	#include<iostream>
	
	using namespace std;

	class Person
	{

		private:

			char name[25];
			int age;
			char gender;
	
			

		public:
			Person(char *n, int a=78, char g='M')
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

	
	int main()
	{
		Person *ptr;

		ptr = new Person("Ajith", 34, 'M');

		ptr -> putPerson();

		delete ptr;
		
		ptr = NULL;

		return 0;
	}
