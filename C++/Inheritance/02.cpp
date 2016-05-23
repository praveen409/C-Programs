



	#include<iostream>
	using namespace std;


	class Animal
	{
		private:
			int legs;
		public:
			Animal(int legs)
			{
				this->legs = legs;
				cout<<"Animal born....\n";
			}

			~Animal()
			{
				cout<<"Animal dead...\n";
			}

		protected:
			void run()
			{
				cout<<"Animal is running by "<<legs<<" legs.\n";
			}

	};



	class Dog : public Animal
	{
		private:
			int tail;
		public:
			Dog(int legs, int tail) : Animal(legs)
			{
				cout<<"Dog is born...\n";
				this -> tail = tail;
			}

			void bark()
			{
				cout<<"Dog can bark and has "<<tail<<" tail.\n";
				run();
			}		

			~Dog()
			{
				cout<<"Dog is dead...\n";
			}

	};


	int main()
	{
		Dog d(4, 1);


		
		d.bark();		


		return 0;
	}



