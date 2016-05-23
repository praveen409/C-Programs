	#include<iostream>
	using namespace std;


  	class Person
	{
		private:
			char name[20];
			int age;
			char gender;
			char phone[12];
			static int count;
		public:
			
			Person(char *n, int a, char g, char *p)
			{
				strcpy(name, n);
				age = a;
				gender = g;
				strcpy(phone, p);
				count++;
			}

			Void putPerson()
			{
				cout<<"Name : "<<name<<"\n";
				cout<<"Age  : "<<age<<"\n";
				cout<<"Gender: "<<gender<<"\n";
				cout<<"Phone: "<<phone<<"\n";
			}

			static void showCount()
			{
				cout<<"Number of Person : "<<count<<"\n";
			}
	};

	int Person :: count;

	int main()
	{
		Person::showCount();

		Person p1("Avinash", 23, 'M', "9232434356");	
		
		Person::showCount();
		
		Person p2("Syed", 43, 'M', "9232435657");

		p1.putPerson();
		p2.putPerson();

		Person::showCount();

		return 0;
	}
