

	#include<iostream>
	#include<string.h>
	using namespace std;


	class Human
	{
		private:
			char *name;

		public:
			Human(char *n)
			{
				int length;

				length = strlen(n);

				name = new char[length+1];
				
				strcpy(name, n);
		
				cout<<name<<" got birth....\n";
			}

			
			~Human()
			{

				cout<<name<<" is dead....\n";
				delete[] name;
				name = NULL;	
				
			}


			void living()
			{
				cout<<name<<" is living in this world...\n";
			}

			void eating()
			{
				cout<<name<<" is eating....\n";
			}

			void eating(char *s)
			{
				cout<<name<<" is eating "<<s<<"...\n";
			}


	};





	int main()
	{
		Human  h2("Kashif");
		

			{
				Human h1("Balamurugan");

				h1.living();
				h1.eating();
			}



		h2.living();
		h2.eating("Mango");


		

	}
