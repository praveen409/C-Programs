


	#include<iostream>
	using namespace std;

	class Animal
	{
		public:
			virtual void eat()
			{
				cout<<"Animal can eat....\n";
			}

			void sleep()
			{
				cout<<"Animal can sleep...\n";
			}
			
			virtual void run() = 0;
			

	};

	class Dog : public Animal
	{
		public:
			void eat()
			{
				cout<<"Dog can eat bones....\n";
			}
			
			void sleep()
			{
				cout<<"Dog can sleep in days also...\n";
			}

			void run()
			{
				cout<<"Dog can run slower....\n";
			}

		
			
	};

	class Horse : public Animal
	{
		public:
			void eat()
			{
				cout<<"Horse can eat grass...\n";
			}
			
			void run()
			{
				cout<<"Horse can run faster....\n";
			}
	};
	

	class Lion : public Animal
	{
		public:
			void run()
			{
				cout<<"Lion can run fastest....\n";
			}
	
	};



	int main()
	{
		Animal *ptr;
		
		int option;
	

		cout<<"1. Dog\n";
		cout<<"2. Horse\n";
		cout<<"3. Lion\n";
		cout<<"Enter the option : ";
		cin>>option;


		switch(option)
		{
			case 1:
				ptr = new Dog;
				break;
			case 2:
				ptr = new Horse;
				break;
			case 3:
				ptr = new Lion;
				break;
		}

		ptr -> eat();
		ptr -> sleep();
		ptr -> run();

		delete ptr;

		return 0;
	}
