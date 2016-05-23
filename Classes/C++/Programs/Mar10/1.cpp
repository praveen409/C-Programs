



	#include<iostream>
	using namespace std;


	class A
	{
		public:

			A()
			{
				cout<<"Father class born\n";
			}

			~A()
			{
				cout<<"Father class dead\n";
			}


	};

	class B : public A
	{
	
		public:

			B()
			{
				cout<<"Child class born\n";
			}

			~B()
			{
				cout<<"Child class dead\n";
			}

	};


	int main()
	{
		B obj;



	}
