
	#include<iostream>

	using namespace std;

	class A
	{
		public:
			void displayA()
			{
				cout<<"Display function in A.....\n";
			}
	
		class B
		{
	
			public:
	
				void displayB()
				{
					cout<<"Display function in B...\n";
				}

	
		};

			
			void displayAagain()
			{
				B obj;
				obj.displayB();
				cout<<"Display again in A....\n";
			}

	};


	int main()
	{

		A obj1;

		obj1.displayA();

		obj1.displayAagain();
		
		return 0;
	 }
