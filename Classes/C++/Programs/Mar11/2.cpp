



	#include<iostream>

	using namespace std;



	class A
	{
		public:
			void displayA()
			{
				cout<<"Display function in A.....\n";
			}
	};



	class B
	{

		public:

			void displayB()
			{
				cout<<"Display function in B...\n";
			}

			A obj1;

	};


	int main()
	{

		B obj2;

		obj2.obj1.displayA();

		obj2.displayB();

		
		return 0;
	}
