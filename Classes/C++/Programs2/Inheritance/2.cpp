




	#include<iostream>

	using namespace std;


	class Animal
	{
		public:
			void eat()
			{
				cout<<"Animal can eat....\n";
			}
	};


	class Mammal : public Animal
	{
		public:
			void run()
			{
				cout<<"Mammal can run...\n";
			}
	};

	class Bird : public Animal
	{
		public:
			void fly()
			{
				cout<<"Bird can fly...\n";
			}
	};
	

	class Dog : public Mammal
	{
		public:
			void bark()
			{
				cout<<"Dog can bark...\n";
			}
	};


	class Sparrow : public Bird
	{
	};







	int main()
	{
		cout<<"Dog Object\n";
		Dog d1;

		d1.eat();
		d1.run();
		d1.bark();
		


		cout<<"Sparrow Object\n";
		Sparrow s;

		s.eat();
		s.fly();

		return 0;
	}








































