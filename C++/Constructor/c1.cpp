












	#include<iostream>
	using namespace std;


	class test
	{	
		private:

			char name[20];

		
		public :

			test(char *n)
			{
				strcpy(name, n);
				cout<<"Object is created...."<<name<<"\n";
			}

			~test()
			{		
				cout<<"Object is destroyed..."<<name<<"\n";;

			}

			void display()
			{
				cout<<"display function is called...."<<name<<"\n";
			}


	};

	test t4("Arun");

	int main()
	{
		test t1("Prabin"), t2("sumanth");
		test *t3 = new test("Peter");

		t3 -> display();

		delete t3;

		t1.display();

		return 0;

	}

