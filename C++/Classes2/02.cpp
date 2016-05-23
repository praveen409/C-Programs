




	// Member Function Overloading...

	#include<iostream>
	using namespace std;



	class Integer
	{
		private:
			int number1;
			int number2;

		public:

			void set()
			{
				number1 = 0;
				number2 = 0;
			}


			void set(int n1, int n2)
			{
				number1 = n1;
				number2 = n2;
			}

			void print()
			{
				cout<<number1<<" "<<number2<<"\n";
			}

	};



	int main(int argc, char *argv[])
	{	
		Integer x, y, z; // int x, y, z;

					

		x.set();   // x = 0;

		y.set(10,20);  // y = 35;


		cout<<"X : ";
		x.print();         // cout<<x;


		cout<<"Y : ";
		y.print();


		cout<<"Z  ";
		z.print();


		return 0;
	}
