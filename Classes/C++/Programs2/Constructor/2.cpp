







	#include<iostream>
	#include<cstring>

	using namespace std;


	class Person
	{
		private:
			char name[20];

		public:

			Person(char *n)
			{	
				strcpy(name, n);
				cout<<name<<" is got born......\n";
			}

			~Person()
			{
				cout<<name<<" is going to die....\n";
			}
			

			void setName(char *n)
			{
				strcpy(name, n);
			}


			char *getName()
			{
				return name;
			}


			void eat()
			{
				cout<<name<<" is eating....\n";
			}

			void sleep()
			{
				cout<<name<<" is sleeping...\n";
			}

			void study()
			{
				cout<<name<<" is studying....\n";
			}

	};



/*
	int main()
	{
		
		Person p1("Rohit");
		
		{
			Person p2("Youraj");
			p2.eat();

		}

		p1.eat();
		p1.sleep();

		{
			Person p3("Varatharajan");
			p3.sleep();

		}	
		
		{
			Person p4("Syed");
		}

		
		p1.study();
		p4.sleep();

		return 0;
	}*/

	void Banglore()
	{
		cout<<"Banglore....\n";
		Person p2("Syed");
		p2.eat();
		p2.sleep();
	}


	void Hydrabad()
	{
		cout<<"Hydrabad..\n";
		Person p3("Rohit");
		
	}



	int main()
	{
		cout<<"Main is started...\n";

		Person p1("Youraj");
	
		Banglore();

		p1.sleep();

		Hydrabad();
	
		p1.eat();

		cout<<"Main is closed...\n";

		return 0;
	}


	
