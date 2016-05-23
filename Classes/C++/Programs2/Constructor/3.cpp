










	#include<iostream>
	
	using namespace std;


	class Integer
	{
		private:
			int number;

		public:
			Integer()  // Default Constructor
			{
				number = 0;
			}

			Integer(int n) // Parameterized Constructor
			{
				number = n;
			}

			

			void show()
			{
				cout<<number<<"\n";
			}
	};


	int main()
	{

		Integer x, y=20, z=0;

		x.show();
		y.show();
		z.show();
		


		return 0;
	}


















