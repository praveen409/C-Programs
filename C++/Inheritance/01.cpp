



	#include<iostream>
	using namespace std;


	class Animal
	{
		public:
			int legs = 4;
			
			void run()
			{
				cout<<"Animal is running by "<<legs<<" legs.\n";
			}
	};



	class Dog : public Animal
	{
		public:
			int tail = 1;

			void bark()
			{
				cout<<"Dog can bark and has "<<tail<<" tail.\n";
			}		

	};


	int main()
	{
		Dog d;


		d.run();
		d.bark();		


		return 0;
	}



