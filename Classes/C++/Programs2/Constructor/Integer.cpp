

		

	#include<iostream>
	using namespace std;




	class Integer
	{
		private:

			short i;

		public:

			Integer()
			{
				i = 0;
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
		

		int x;
		Integer a;
	

		a.set(10);

		x = a.square();
		



		a.show();
		cout<<"X	: "<<x<<"\n";
		

		return 0;

	}
