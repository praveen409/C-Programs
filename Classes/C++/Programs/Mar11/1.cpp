



	#include<iostream>
	using namespace std;


	class Animal   // abstract class
	{
		public:

			void sleep()
			{
				cout<<"All animal has to sleep!...\n";
			}


			virtual void run()
			{
				cout<<"Animal can run....\n";
			}	


			virtual void eat() = 0; 

	};


	class Dog : public Animal
	{		
		public:
			void eat()
			{
				cout<<"Dog eat bones...\n";
			}
	};


	class Horse : public Animal
	{
		public:
			void run()
			{
				cout<<"Horse can run faster...!\n";
			}

			void eat()
			{
				cout<<"Horse can eat grass..!\n";
			}
	};
	
	



	int main()
	{

		Animal *obj;



		cout<<"Dog Object\n";
		
		obj = new Dog;

		obj -> sleep();

		obj -> run();

		obj -> eat();

		delete obj;



		cout<<"Horse Object \n";

		obj = new Horse;

		obj->sleep();

		obj->run();

		obj -> eat();

		delete obj;




		return 0;
	}


