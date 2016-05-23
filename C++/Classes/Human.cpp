

	#include<iostream>
	#include<cstring>
	using namespace std;


	class Human
	{
	   private:
		char name[20];

	   public:
		void living()
		{
			cout<<name<<" is living...\n";
		}

		void eating()
		{
			cout<<name<<" is eating...\n";
		}

		void sleeping()
		{
			cout<<name<<" is sleeping...\n";
		}


		// Constructor
		Human(char *n)
		{
			strcpy(name, n);
			cout<<name<<" is born....\n";
		}

		// Destructor
		~Human()
		{
			cout<<name<<" is dead...\n";
		}

	};






	int main(int argc, char *argv[])
	{
		
		cout<<"Main Program Starts.....\n";

		{
			Human h1("Gopal"), h2("Syed");


			h1.living();

			//	strcpy(h1.name, "Mohan");  error private
		
			h2.sleeping();
			
			{
				Human h3("Mohan");

				h3.living();
				h3.eating();
				h2.sleeping();
				h3.sleeping();

			}

			h1.eating();
					
			h2.sleeping();
		}

		cout<<"Main Program Ends......\n";

		return 0;
	}





	
	
