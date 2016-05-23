

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

			bool compareTo(Person &x)
			{
				if(this == &x)
				{
					return true;
				}
				else
				{
					return false;
				}
			}

	};


	int main()
	{

		Person p1, p2, &p3=p1;    

		p1.setPerson("Youraj", 23);

		p2 = p1;

		p1.printPerson();
		p2.printPerson();
		p3.printPerson();


		if( p1.compareTo(p2) )
		{
			cout<<"P1 and P2 is same....\n";
		}
		else
		{
			cout<<"P1 and P2 is different....\n";
		}

		return 0;
		
	}


