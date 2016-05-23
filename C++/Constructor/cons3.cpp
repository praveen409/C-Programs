

		

	#include<iostream>
	using namespace std;




	class Integer
	{
		private:

			short i;

		public:
			
			// Default Constructor
			Integer()
			{
				i = 0;
			}

			// Parameterized Constructor
			Integer(int j)
			{
				i = j;
			}
		
			
			// Copy Constructor
			Integer(Integer &j)
			{
				i = j.i;
			}
			

			void set(int k)
			{
				i = k;
			}

			int square()
			{
				return i * i;
			}

			void show()
			{
				cout<<i<<"\n";
			}

	};
	




	int main()
	{
		

	
		Integer a(10);
			
		a.show();

		Integer b(a);

		b.show();
	

		return 0;

	}
